/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:44:59 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/17 14:49:37 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	AForm			*form;
	Bureaucrat		Root("Root", 1);
	Bureaucrat		Carrot("Carrot", 38);
	Bureaucrat		Tomato("Tomato", 146);
	int i = 0;
	
	i++;
	std::cout << std::endl << "\033[1;34;47m" << " [TEST " << i <<"] ShrubberyCreationForm "<< "\033[0m " << std::endl;
	try
	{
		form = new ShrubberyCreationForm("21_A");
		form->beSigned(Root);
		form->execute(Carrot);
		form->execute(Tomato);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	i++;
	std::cout << std::endl << "\033[1;34;47m" << " [TEST " << i <<"] RobotomyRequestForm "<< "\033[0m " << std::endl;
	try
	{
		form = new RobotomyRequestForm("21_B");
		form->beSigned(Root);
		form->execute(Carrot);
		form->execute(Carrot);
		form->execute(Carrot);
		form->execute(Carrot);
		form->execute(Carrot);
		form->execute(Carrot);
		form->execute(Carrot);
		form->execute(Carrot);
		form->execute(Carrot);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	i++;
	std::cout << std::endl << "\033[1;34;47m" << " [TEST " << i <<"] PresidentialPardonForm "<< "\033[0m" << std::endl;
	try
	{
		form = new PresidentialPardonForm("21_C");
		form->execute(Root);
		Root.executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	i++;
	std::cout << std::endl << "\033[1;34;47m" << " [TEST " << i <<"] PresidentialPardonForm "<< "\033[0m" << std::endl;
	try
	{
		form = new PresidentialPardonForm("21_D");
		form->beSigned(Root);
		form->execute(Root);
		Root.executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
