/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:17:40 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/19 19:32:35 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

Data        *deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

uintptr_t   serialize(Data *ptr)
{
    return  reinterpret_cast<uintptr_t>(ptr);
}

int main()
{
    Data		*ptr = new Data;
	Data		*new_ptr;
	uintptr_t	raw;

	ptr->setData("Hello world");
	raw = serialize(ptr);
	new_ptr = deserialize(raw);
	std::cout << "Data: " << new_ptr->getData() << std::endl;
}
