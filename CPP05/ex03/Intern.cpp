/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:32:07 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/17 15:08:03 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
     std::cout << "[Intern] default constructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
    std::cout << "[Intern] copy constructor called" << std::endl;
    *this = src;
}

Intern::~Intern()
{
    // std::cout << "[Intern] destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &newValue)
{
    std::cout << "[Intern] assignation operator called" << std::endl;
    (void)newValue;
    return *this;
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    AForm *form = nullptr;
    int i = 0;
    std::string applicableForms[3] = {"shrubbery request", "robotomy request", "presidential request"};
	while (formName.compare(applicableForms[i]) && i < 3)
        i++;
    switch(i)
    {
        case 0:
            std::cout << "Intern creates " << formName << std::endl;
            form = new ShrubberyCreationForm(target);
            break ;
        case 1:
            std::cout << "Intern creates " << formName << std::endl;
            form = new RobotomyRequestForm(target);
            break ;
        case 2:
            std::cout << "Intern creates " << formName << std::endl;
            form = new PresidentialPardonForm(target);
            break ;
        default:
            throw UnknownForm();
    }
    return form;
}

const char *Intern::UnknownForm::what() const throw()
{
	return "Intern doesn't know this form";
}