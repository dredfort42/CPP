/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:20:55 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/17 09:38:23 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	AForm("ShrubberyCreationForm", 145, 137), _target("")
{
     std::cout << "[ShrubberyCreationForm] default constructor called" << std::endl;;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):
	AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "[ShrubberyCreationForm] attributed constructor called" << std::endl;;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src):
	AForm("ShrubberyCreationForm", 145, 137), _target(src.getTarget())
{
    std::cout << "[ShrubberyCreationForm] copy constructor called" << std::endl;;
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // std::cout << "[AForm] destructor called" << std::endl;;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &newValue)
{
	std::cout << "[ShrubberyCreationForm] assignation operator called" << std::endl;;
    std::cout << "Attributes are consts and can't be set" << std::endl;;
	newValue.getTarget();
	return *this;
}

const std::string   &ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    std::string		fileName = _target + "_shrubbery";
	std::ofstream	ofs;
	
	canBeExecute(executor);
	ofs.open(fileName.c_str(), std::ios::out);
    ofs << "              *         *      *         *" << std::endl; 
    ofs << "          ***          **********          ***" << std::endl;
    ofs << "       *****           **********           *****" << std::endl;
    ofs << "     *******           **********           *******" << std::endl;
    ofs << "   **********         ************         **********" << std::endl;
    ofs << "  ****************************************************" << std::endl;
    ofs << " ******************************************************" << std::endl;
    ofs << "********************************************************" << std::endl;
    ofs << "********************************************************" << std::endl;
    ofs << "********************************************************" << std::endl;
    ofs << " ******************************************************" << std::endl;
    ofs << "  ********      ************************      ********" << std::endl;
    ofs << "   *******       *     *********      *       *******" << std::endl;
    ofs << "     ******             *******              ******" << std::endl;
    ofs << "       *****             *****              *****" << std::endl;
    ofs << "          ***             ***              ***" << std::endl;
    ofs << "            **             *              **" << std::endl;
    ofs.close();
	std::cout << "File " << this->_target << "_shrubbery created" << std::endl;;
}
