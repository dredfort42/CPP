/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:27:01 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/19 20:16:05 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base
{
    public:
        virtual ~Base() {};
};

class A: public Base
{
    public:
        ~A() {};
};

class B: public Base
{
    public:
        ~B() {};    
};

class C: public Base
{
    public:
        ~C() {};    
};

#endif