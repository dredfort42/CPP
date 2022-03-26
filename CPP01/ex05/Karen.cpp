/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:55:22 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/09 14:07:50 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {}
Karen::~Karen() {}

void    Karen::complain(std::string level)
{
    int         i = 0;
    void        (Karen::*_functions[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    std::string lavels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    while (i < 4)
    {
        if (lavels[i] == level)
        {
            void    (Karen::*selected)() = _functions[i];
            (this->*selected)();
        }
        i++;
    }
}

void	Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}