/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:22:17 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/16 20:43:26 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): 
_name(""), _requiredToSign(0), _requiredToExecute(0), _isSigned(false)
{
    std::cout << "[AForm] default constructor called" << std::endl;
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute):
_name(name), _requiredToSign(gradeToSign), _requiredToExecute(gradeToExecute), _isSigned(false)
{
    std::cout << "[AForm] attributed constructor called" << std::endl;
    _checkFormGrade();
}

AForm::AForm(const AForm &src):
_name(src.getFormName()), _requiredToSign(src.getGradeToSign()),
_requiredToExecute(src.getGradeToExecute()), _isSigned(src.getSignedStatus())
{
    std::cout << "[AForm] copy constructor called" << std::endl;
    *this = src;
}

AForm::~AForm()
{
    // std::cout << "[AForm] destructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &newValue)
{
    std::cout << "[AForm] assignation operator called" << std::endl;
    std::cout << "Some attributes are consts and can't be set" << std::endl;
    _isSigned = newValue._isSigned;
    return *this;
}

const std::string AForm::getFormName() const
{
    return _name;
}

bool AForm::getSignedStatus() const
{
    return _isSigned;
}

int AForm::getGradeToSign() const
{
    return _requiredToSign;
}

int AForm::getGradeToExecute() const
{
    return _requiredToExecute;
}

void    AForm::_checkFormGrade() const
{
    if (_requiredToSign < _maxGrade || _requiredToExecute < _maxGrade)
        throw GradeTooHighException();
    else if (_requiredToSign > _minGrade || _requiredToExecute > _minGrade)
        throw GradeTooLowException();
}

void    AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= _requiredToSign)
        _isSigned = true;
    else
        throw GradeTooLowException();
}

void    AForm::canBeExecute(const Bureaucrat &executor) const
{
    if (!_isSigned)
		throw FormNotSigned();
    else if (_requiredToExecute < executor.getGrade())
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, const AForm &value)
{
    o << "##################################################" << std::endl;
    o << "# " << value.getFormName() << "signed: " << value.getSignedStatus() << "." << std::endl;
    o << "# Grade required to sign Aform: " << value.getGradeToSign() << "." << std::endl;
    o << "# Grade required to execute Aform: " << value.getGradeToExecute() << "." << std::endl;
    o << "##################################################" << std::endl;
	return o;
}
