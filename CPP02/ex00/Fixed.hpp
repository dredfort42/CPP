/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:50:42 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/11 13:01:58 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HDD
# define FIXED_HDD

#include <iostream>

class Fixed
{
private:
    int                 _fixedPointValue;
    static int const    _numberOfFractionalBits = 8;
public:
    Fixed();
    Fixed(Fixed const &src);
    ~Fixed();

    Fixed   &operator=(Fixed const &rhs);

    int     getRawBits() const;
    void    setRawBits(int const raw);
};
#endif