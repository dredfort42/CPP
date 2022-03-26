/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:38:31 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/11 19:40:59 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Point.hpp"

Fixed triangleSquare(Fixed a, Fixed b, Fixed c)
{
    Fixed p = (a + b + c) / 2;
    Fixed tmp = p * (p - a) * (p - b) * (p - c);
    return sqrtf(tmp.toFloat());
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
    if (a == b || a == c || b == c)
	{
		std::cout << "Given coordinates don't form a triangle" << std::endl;
		return false;
	}
    
    Fixed AB = sqrtf(powf((a.getX().toFloat() - b.getX().toFloat()), 2)
                    + powf((a.getY().toFloat() - b.getY().toFloat()),2));
    Fixed BC = sqrtf(powf((b.getX().toFloat() - c.getX().toFloat()), 2)
                    + powf((b.getY().toFloat() - c.getY().toFloat()),2));
    Fixed CA = sqrtf(powf((a.getX().toFloat() - c.getX().toFloat()), 2)
                    + powf((a.getY().toFloat() - c.getY().toFloat()),2));
    Fixed AP = sqrtf(powf((point.getX().toFloat() - a.getX().toFloat()), 2)
                    + powf((point.getY().toFloat() - a.getY().toFloat()),2));
    Fixed BP = sqrtf(powf((point.getX().toFloat() - b.getX().toFloat()), 2)
                    + powf((point.getY().toFloat() - b.getY().toFloat()),2));
    Fixed CP = sqrtf(powf((point.getX().toFloat() - c.getX().toFloat()), 2)
                    + powf((point.getY().toFloat() - c.getY().toFloat()),2));
    Fixed result = (triangleSquare(AP,BP,AB)
                    + triangleSquare(AP,CP,CA)
                    + triangleSquare(BP,CP,BC))
                    - triangleSquare(AB,BC,CA);
    if (result < 0)
        return true;
    return false;
}