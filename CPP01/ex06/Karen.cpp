/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:23:12 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/09 22:13:26 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"


Karen::Karen(std::string filterLevel)
{
    int         i = 0;

    std::string lavels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (i < 4 && lavels[i] != filterLevel)
        i++;
    this->_filterLevel = i;
}
Karen::~Karen() {}

void    Karen::complain(std::string level)
{
    int         i = 0;
    std::string lavels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    while (i < 4)
    {
        if (lavels[i] == level && i >= this->_filterLevel)
        {
            switch (i)
            {
                case 0:
                    this->debug();
                    break;
                case 1:
                    this->info();
                    break;
                case 2:
                    this->warning();
                    break;
                    
                default:
                    this->error();
                    break;
            }
        }
        i++;
    }
}

void	Karen::debug()
{
    std::cout << "\033[30;46m[ DEBUG ]\033[0m" << std::endl << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl << std::endl;
}

void	Karen::info()
{
    std::cout << "\033[30;46m[ INFO ]\033[0m" << std::endl << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money.\nYou don't put enough!\nIf you did I would not have to ask for it!" << std::endl << std::endl;
}

void	Karen::warning()
{
    std::cout << "\033[30;46m[ WARNING ]\033[0m" << std::endl << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void	Karen::error()
{
    std::cout << "\033[30;46m[ ERROR ]\033[0m" << std::endl << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}