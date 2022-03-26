/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:33:25 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/09 18:46:52 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie  test("Z_NRM");
    test.announce();

    Zombie  *ptr_test = test.newZombie("Z_PTR");
    ptr_test->announce();

    test.randomChump("Z_FNC");
    test.announce();
    delete ptr_test;
    
}