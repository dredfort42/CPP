/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:02:11 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/16 20:16:54 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
     std::cout << "[Bureaucrat] default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
    std::cout << "[Bureaucrat] attributed constructor called" << std::endl;
    _checkGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    std::cout << "[Bureaucrat] copy constructor called" << std::endl;
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << "[Bureaucrat] destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &newValue)
{
    std::cout << "[Bureaucrat] assignation operator called" << std::endl;
    std::cout << "New name \"" << newValue._name << "\" can't be set" << std::endl;
    _grade = newValue._grade;
    return *this;
}

const std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void Bureaucrat::incrementGrade(int value)
{
    _grade -= value;
    _checkGrade();
}

void Bureaucrat::decrementGrade(int value)
{
    _grade += value;
    _checkGrade();
}

void    Bureaucrat::_checkGrade() const
{
    if (_grade < _maxGrade)
        throw GradeTooHighException();
    else if (_grade > _minGrade)
        throw GradeTooLowException();
}

void    Bureaucrat::signForm(AForm &form)
{
    if (_grade <= form.getGradeToSign())
    {
        std::cout << _name << " signed " << form.getFormName() << std::endl;
        form.beSigned(*this);
    }
    else
    {
        std::cout << _name << " couldn’t sign " << form.getFormName() 
        << " because ";
        throw GradeTooLowException();
    }
}

void    Bureaucrat::executeForm(const AForm &form)
{
    if (form.getSignedStatus())
    {
        if (_grade <= form.getGradeToExecute())
        {
            std::cout << _name << " executed " << form.getFormName() << std::endl;
        }
        else
        {
            std::cout << _name << " couldn't execut " << form.getFormName() << " because ";
            throw GradeTooLowException();
        }
    }
    else
        throw AForm::FormNotSigned();
} 

std::ostream &operator<<(std::ostream &o, const Bureaucrat &value)
{
    o << value.getName() << ", Bureaucrat grade " << value.getGrade() << ".";
	return o;
}