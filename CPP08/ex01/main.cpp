/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:02:59 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/22 18:58:12 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main()
{
    unsigned int size = 10000;
    Span A(size);

    for (unsigned int i = 0; i <= size; i++)
    {
        try
        {
            A.addNumber(std::rand());
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    try
    {
        int span = A.shortestSpan();
        std::cout << span << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        int span = A.longestSpan();
        std::cout << span << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << " --- --- --- --- --- " << std::endl;
    std::vector<int> cTmp;
    for (unsigned int i = 0; i <= size; i++)
        cTmp.push_back(std::rand());

    try
    {
        A.improvedAddNumber(cTmp.begin(), cTmp.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << " --- --- --- --- --- " << std::endl;
    cTmp.pop_back();

    try
    {
        A.improvedAddNumber(cTmp.begin(), cTmp.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        int span = A.shortestSpan();
        std::cout << span << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        int span = A.longestSpan();
        std::cout << span << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }        
}