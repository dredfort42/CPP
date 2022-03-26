/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:23:30 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/09 22:04:25 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "\033[1;31mInput filter level:\033[0m\n[ DEBUG | INFO | WARNING | ERROR ]" << std::endl;
		return (1);
	}

	std::string level = argv[1];

	if (level!= "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
	{
		std::cout << "\033[30;46m[ Probably complaining about insignificant problems ]\033[0m" << std::endl;
		return (0);
	}

	Karen karen(level);

	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
}