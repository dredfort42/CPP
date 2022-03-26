/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:36:41 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/11 15:46:23 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"   

int main()
{
    Fixed a;
    Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    
    // std::cout << Fixed::min( a, b ) << std::endl;
    
    // a = 1;
    // b = 3.14f;

    // std::cout << b << " < " << a << " -- " << (b < a) << std::endl;
    // std::cout << b << " <= " << a << " -- " << (b <= a) << std::endl;
    // std::cout << b << " > " << a << " -- " << (b > a) << std::endl;
    // std::cout << b << " >= " << a << " -- " << (b >= a) << std::endl;
    // std::cout << b << " == " << a << " -- " << (b == a) << std::endl;
    // std::cout << b << " != " << a << " -- " << (b != a) << std::endl;

    // a = 3.14f;

    // std::cout << b << " < " << a << " -- " << (b < a) << std::endl;
    // std::cout << b << " <= " << a << " -- " << (b <= a) << std::endl;
    // std::cout << b << " > " << a << " -- " << (b > a) << std::endl;
    // std::cout << b << " >= " << a << " -- " << (b >= a) << std::endl;
    // std::cout << b << " == " << a << " -- " << (b == a) << std::endl;
    // std::cout << b << " != " << a << " -- " << (b != a) << std::endl;
    
    // b = 6.28f;

    // std::cout << b << " + " << a << " -- " << (b + a) << std::endl;
    // std::cout << b << " - " << a << " -- " << (b - a) << std::endl;
    // std::cout << b << " * " << a << " -- " << (b * a) << std::endl;
    // std::cout << b << " / " << a << " -- " << (b / a) << std::endl;

    return 0;
}