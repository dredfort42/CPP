/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stream.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:13:11 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/09 11:24:41 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Stream.hpp"

Stream::Stream(std::string fileName, std::string s1, std::string s2) :
    _fileName(fileName), _s1(s1), _s2(s2) {}

Stream::~Stream() {}

bool    Stream::read()
{
    std::ifstream   ifs(this->_fileName);
    std::string     line;

    if (ifs.is_open())
    {
        while (getline(ifs, line))
        {
            this->_content.append(line);
            this->_content.append("\n");
        }
        ifs.close();
        return (true);
    }
    else
        return (false);
}

void    Stream::replace()
{
    int     s1Len = this->_s1.length();
    int     position = 0;

    while (position >= 0)
    {
        position = this->_content.find(this->_s1);
        if (position >= 0)
        {
            this->_content.erase(position, s1Len);
            this->_content.insert(position, this->_s2);
        }
    }
}

bool    Stream::save()
{
    std::string     fileName = this->_fileName;

    fileName += ".replace";
    std::ofstream   ofs(fileName);
    if (ofs.is_open())
    {
        ofs << this->_content << std::endl;
        return (true);
    }
    else
        return (false);
}