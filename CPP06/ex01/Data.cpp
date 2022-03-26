/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:35:16 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/19 19:32:23 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {}
Data::Data(const Data &src) {*this = src;}
Data::~Data() {}

Data        &Data::operator=(const Data &newValue)
{
    (void)newValue;
    return *this;
}

void        Data::setData(const std::string data)
{
    this->_data = data;
}

std::string Data::getData() const
{
    return this->_data;
}