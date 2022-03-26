/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:12:40 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/22 10:59:08 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int	main( void )
{

    std::cout << std::endl << "\033[34;47m container of int's test \033[0m" << std::endl;
	std::vector<int>			container;
	std::vector<int>::iterator	arg;

    try
    {
        arg = easyfind(container, 21);
        std::cout << "Iterator: " << *arg << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 1; i < 59; i += 2)
		container.push_back(i);
        
    try
    {
        arg = easyfind(container, 21);
        std::cout << "Iterator: " << *arg << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        arg = easyfind(container, 42);
        std::cout << "Iterator: " << *arg << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "\033[34;47m container of char's test \033[0m" << std::endl;
    std::string             c1;
    std::string::iterator   ci;

    try
    {
        ci = easyfind(c1, 'o');
        std::cout << "Iterator: " << *ci << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    c1 = "Hello world!";
    try
    {
        ci = easyfind(c1, 'o');
        std::cout << "Iterator: " << *ci << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        ci = easyfind(c1, 'a');
        std::cout << "Iterator: " << *ci << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
}
