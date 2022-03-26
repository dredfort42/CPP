/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:50:42 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/11 15:21:54 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HDD
# define FIXED_HDD

#include <iostream>

class Fixed
{
private:
    int                 _fixedPointValue;
    static const int    _numberOfFractionalBits = 8;
public:
    Fixed();
    Fixed(const int fixedPointValue);
    Fixed(const float floatingPointValue);
    Fixed(const Fixed &src);
    ~Fixed();

    Fixed   &operator=(const Fixed &rhs);
    Fixed   operator+(const Fixed &rhs);
    Fixed   operator-(const Fixed &rhs);
    Fixed   operator*(const Fixed &rhs);
    Fixed   operator/(const Fixed &rhs);
    Fixed   &operator++();
	Fixed   operator++(int);
	Fixed   &operator--();
	Fixed   operator--(int);
    
    bool    operator>(const Fixed &rhs);
    bool    operator<(const Fixed &rhs);
    bool    operator>=(const Fixed &rhs);
    bool    operator<=(const Fixed &rhs);
    bool    operator==(const Fixed &rhs);
    bool    operator!=(const Fixed &rhs);

    static Fixed &min( Fixed &a, Fixed &b );
	static const Fixed &min( const Fixed &a, const Fixed &b );
	static Fixed &max( Fixed &a, Fixed &b );
	static const Fixed &max( const Fixed &a, const Fixed &b );

    int     getRawBits() const;
    void    setRawBits(const int raw);
    int     toInt() const;
    float   toFloat() const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &value);

#endif