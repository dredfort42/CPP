/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:33:25 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/09 21:09:07 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

int main()
{
    int i = 0;
    int N =10;
    std::string name = "_Zz";
    Zombie  *horde = zombieHorde(N, name);
    
    while (i < N)
    {
        std::cout << std::setfill('0') << std::setw(2) << i + 1;
        horde[i].announce();
        i++;
    }

    delete [] horde;    
}