/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:56:00 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/17 10:01:06 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	AForm("PresidentialPardonForm", 25, 5), _target("")
{
     std::cout << "[PresidentialPardonForm] default constructor called" << std::endl;;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):
	AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "[PresidentialPardonForm] attributed constructor called" << std::endl;;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src):
	AForm("PresidentialPardonForm", 25, 5), _target(src.getTarget())
{
    std::cout << "[PresidentialPardonForm] copy constructor called" << std::endl;;
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    // std::cout << "[AForm] destructor called" << std::endl;;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &newValue)
{
	std::cout << "[PresidentialPardonForm] assignation operator called" << std::endl;;
    std::cout << "Attributes are consts and can't be set" << std::endl;;
	newValue.getTarget();
	return *this;
}

const std::string   &PresidentialPardonForm::getTarget() const
{
	return _target;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	canBeExecute(executor);
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
