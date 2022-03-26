/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:53:59 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/21 17:17:09 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp" 

int	main()
{
    int size = 21;

	Array<int>			iAr(size);
	Array<std::string>	sAr1(size);
	Array<std::string>	sAr2;


	int i = 0;
    while (i < size)
    {
        iAr[i] = i;
        sAr1[i] = "string_" + std::to_string(i);
        i++;
    }

    std::cout << "-----" << std::endl;
	std::cout << "iAr.size() = " << iAr.size() << std::endl;
    std::cout << "-----" << std::endl;
	std::cout << "sAr1.size() = " << sAr1.size() << std::endl;
    std::cout << "-----" << std::endl;
	sAr2 = sAr1;
    std::cout << "sAr2.size() = " << sAr2.size() << std::endl;
	std::cout << sAr2[5] << std::endl;
    std::cout << "-----" << std::endl;

	try
	{
		std::cout << sAr1[59] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << sAr1[-3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}