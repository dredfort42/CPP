/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:21:49 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/21 16:27:12 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template<typename T>
void	function(T &arg)
{
	std::cout << arg << std::endl;
}

int	main( void )
{
	std::string	array[5];

	array[0] = "Hello 0";
	array[1] = "Hello 1";
	array[2] = "Hello 2";
    array[3] = "Hello 3";
    array[4] = "Hello 4";
	::iter(array, 5, &function);
}

