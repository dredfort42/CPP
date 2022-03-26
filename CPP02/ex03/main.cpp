/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:36:41 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/11 20:41:54 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main()
{
    {
        Point const		a(0.5f, 1.0f);
        Point const		b(5.0f, 1.0f);
        Point const		c(2.5f, 5.5f);
        Point const		point(2.5f, 2.5f);
        std::cout << (bsp(a, b, c, point) ? "inside" : "outside") << std::endl;
    }

    {
        Point const		a(0.5f, 1.0f);
        Point const		b(5.0f, 1.0f);
        Point const		c(2.5f, 5.5f);
        Point const		point(5.0f, 2.5f);
        std::cout << (bsp(a, b, c, point) ? "inside" : "outside") << std::endl;
    }

    return 0;
}