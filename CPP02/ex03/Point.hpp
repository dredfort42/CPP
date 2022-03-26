/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:43:34 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/11 20:34:02 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
    Fixed _x;
    Fixed _y;
public:
    Point();
    Point(const float x, const float y);
    Point(const Point &newValue);
    ~Point();

    Point &operator=(const Point &newValue);
    bool  operator==(const Point &rhs) const; 

    const Fixed getX() const;
    const Fixed getY() const;
};

#endif