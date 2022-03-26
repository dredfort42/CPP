/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:36:48 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/17 09:49:02 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	AForm("RobotomyRequestForm", 72, 45), _target("")
{
     std::cout << "[RobotomyRequestForm] default constructor called" << std::endl;;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
	AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "[RobotomyRequestForm] attributed constructor called" << std::endl;;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src):
	AForm("RobotomyRequestForm", 72, 45), _target(src.getTarget())
{
    std::cout << "[RobotomyRequestForm] copy constructor called" << std::endl;;
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // std::cout << "[AForm] destructor called" << std::endl;;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &newValue)
{
	std::cout << "[RobotomyRequestForm] assignation operator called" << std::endl;;
    std::cout << "Attributes are consts and can't be set" << std::endl;;
	newValue.getTarget();
	return *this;
}

const std::string   &RobotomyRequestForm::getTarget() const
{
	return _target;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	canBeExecute(executor);
    std::cout << "ZZzz..ssSS some drilling noises" << std::endl;
	if (std::rand() % 2)
	    std::cout << this->_target << " has been successfully robotomized" << std::endl;
    else
         std::cout << this->_target << " hasn't been robotomized" << std::endl;
}
