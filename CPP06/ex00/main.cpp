/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:17:40 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/19 18:37:02 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>
#include <cmath>

void    toChar(double d)
{
    std::cout << "char: ";
    if (d == -std::numeric_limits<double>::infinity()
        || d == std::numeric_limits<double>::infinity()
        || std::isnan(d))
        std::cout << "impossible" << std::endl;
    else
    {
        char a = static_cast<int>(d);
        if (a < 32 || a > 126)
            std::cout << "not printable" << std::endl;
        else
            std::cout << static_cast<char>(a) << std::endl;
    }
}

void    toInt(double d)
{
    std::cout << "int: ";
    if (std::isnan(d))
        std::cout << "impossible" << std::endl;
    else if (d > std::numeric_limits<int>::max())
        std::cout << "inf" << std::endl;
    else if (d < std::numeric_limits<int>::min())
        std::cout << "-inf" << std::endl;
    else
        std::cout << static_cast<int>(d) << std::endl;
}

void    toFloat(double d)
{
    std::cout << "float: ";
    if (std::isnan(d))
        std::cout << "nanf" << std::endl;
    else if (d > std::numeric_limits<float>::max())
        std::cout << "inff" << std::endl;
    else if (d < std::numeric_limits<float>::min())
        std::cout << "-inff" << std::endl;
    else
        std::cout << static_cast<float>(d) << "f" << std::endl;
}

void toDouble(double d)
{
    std::cout << "double: ";
    if (std::isnan(d))
        std::cout << "nan" << std::endl;
    else if (d == std::numeric_limits<double>::infinity())
        std::cout << "inf" << std::endl;
    else if (d == -std::numeric_limits<double>::infinity())
        std::cout << "-inf" << std::endl;
    else
        std::cout << static_cast<double>(d) << std::endl;
}

bool    inputOk(std::string str)
{
    if (!str.compare("nan") || !str.compare("inf") || !str.compare("-inf")
        || !str.compare("nanf") || !str.compare("inff") || !str.compare("-inff"))
        return true;
    else
    {
        int i = 0;
        while (str[i] == ' ')
            i++;
        if (str[i] == '-' || str[i] == '+')
            i++; 
        if (str[i] < '0' || str[i] > '9')
            return false;
        else
            return true;
    }
}

int main(int argc, char **argv)
{
    double d;

    if (argc != 2)
    {
        std::cout << "Input some parameter!" << std::endl;
        return (1);
    }

    std::cout.precision(1);
    std::cout << std::fixed;

    d = atof(argv[1]);
    if (inputOk(argv[1]))
    {
        toChar(d);
        toInt(d);
        toFloat(d);
        toDouble(d);
    }
    else
        std::cout << "Incorrect input" << std::endl;
}
