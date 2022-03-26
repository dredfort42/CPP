/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:28:43 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/08 10:49:19 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie *tmp = new Zombie[N];

    while (i < N)
    {
        tmp[i].setName(name);
        i++;
    }
    return (tmp);
};