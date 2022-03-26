/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:22:17 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/16 16:19:15 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): 
_name(""), _requiredToSign(0), _requiredToExecute(0), _isSigned(false)
{
     std::cout << "[Form] default constructor called" << std::endl;
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute):
_name(name), _requiredToSign(gradeToSign), _requiredToExecute(gradeToExecute), _isSigned(false)
{
    std::cout << "[Form] attributed constructor called" << std::endl;
    _checkFormGrade();
}

Form::Form(const Form &src):
_name(src.getFormName()), _requiredToSign(src.getGradeToSign()),
_requiredToExecute(src.getGradeToExecute()), _isSigned(src.getSignedStatus())
{
    std::cout << "[Form] copy constructor called" << std::endl;
    *this = src;
}

Form::~Form()
{
    // std::cout << "[Form] destructor called" << std::endl;
}

Form &Form::operator=(const Form &newValue)
{
    std::cout << "[Form] assignation operator called" << std::endl;
    std::cout << "Some attributes are consts and can't be set" << std::endl;
    _isSigned = newValue._isSigned;
    return *this;
}

const std::string Form::getFormName() const
{
    return _name;
}

bool Form::getSignedStatus() const
{
    return _isSigned;
}

int Form::getGradeToSign() const
{
    return _requiredToSign;
}

int Form::getGradeToExecute() const
{
    return _requiredToExecute;
}

void    Form::_checkFormGrade() const
{
    if (_requiredToSign < _maxGrade || _requiredToExecute < _maxGrade)
        throw GradeTooHighException();
    else if (_requiredToSign > _minGrade || _requiredToExecute > _minGrade)
        throw GradeTooLowException();
}

void    Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= _requiredToSign)
        _isSigned = true;
    else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, const Form &value)
{
    o << "##################################################" << std::endl;
    o << "# " << value.getFormName() << "signed: " << value.getSignedStatus() << "." << std::endl;
    o << "# Grade required to sign form: " << value.getGradeToSign() << "." << std::endl;
    o << "# Grade required to execute form: " << value.getGradeToExecute() << "." << std::endl;
    o << "##################################################" << std::endl;
	return o;
}
