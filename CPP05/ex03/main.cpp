/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:44:59 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/17 15:07:16 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern  		someRandomIntern;
	AForm			*form21A;
	AForm			*form21B;
	AForm			*form21C;
	AForm			*form21D;
	int i = 0;
	
	i++;
	std::cout << std::endl << "\033[1;34;47m" << " [TEST " << i <<"] ShrubberyCreationForm "<< "\033[0m " << std::endl;
	try
	{
		Bureaucrat	Root("Root", 1);

		form21A = someRandomIntern.makeForm("shrubbery request", "Market");
		form21A->beSigned(Root);
		Root.signForm(*form21A);
		Root.executeForm(*form21A);
		delete form21A;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	i++;
	std::cout << std::endl << "\033[1;34;47m" << " [TEST " << i <<"] RobotomyRequestForm "<< "\033[0m " << std::endl;
	try
	{
		Bureaucrat	Carrot("Carrot", 38);
		form21B = someRandomIntern.makeForm("robotomy request", "Automator");;
		Carrot.signForm(*form21B);
		Carrot.executeForm(*form21B);
		Carrot.executeForm(*form21B);
		Carrot.executeForm(*form21B);
		Carrot.executeForm(*form21B);
		Carrot.executeForm(*form21B);
		Carrot.executeForm(*form21B);
		Carrot.executeForm(*form21B);
		Carrot.executeForm(*form21B);
		Carrot.executeForm(*form21B);
		Carrot.executeForm(*form21B);
		delete form21B;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	i++;
	std::cout << std::endl << "\033[1;34;47m" << " [TEST " << i <<"] PresidentialPardonForm "<< "\033[0m" << std::endl;
	try
	{
		Bureaucrat		Root("Root", 1);
		form21C = someRandomIntern.makeForm("presidential request", "Automator");
		Root.signForm(*form21C);
		Root.executeForm(*form21C);
		delete form21C;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	i++;
	std::cout << std::endl << "\033[1;34;47m" << " [TEST " << i <<"] PresidentialPardonForm "<< "\033[0m" << std::endl;
	try
	{
		Bureaucrat		Root("Root", 1);
		form21D = someRandomIntern.makeForm("pPpPresidential rRrRequest", "Automator");
		Root.signForm(*form21D);
		Root.executeForm(*form21D);
		delete form21D;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
