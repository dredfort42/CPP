/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:38:58 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/09 11:23:57 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Stream.hpp"

int main(int argc, char **argv)
{
    std::string     fileName;
    std::string     s1;
    std::string     s2;

    if (argc != 4)
    {
        std::cerr << "Input three parameters in the following order: a filename and two strings, s1 and s2!" << std::endl;
        return (0);
    }
    fileName = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    if (fileName == "" || s1 == "" || s2 == "")
    {
        std::cerr << "Filename, s1 and s2 can't be empty!" << std::endl;
        return (1);
    }
    Stream  stream(fileName, s1, s2);
    if (!stream.read())
    {
        std::cerr << "Can't read file: " << fileName << std::endl;
        return (1);
    }
    stream.replace();
    if (!stream.save())
    {
        std::cerr << "Can't save file: " << fileName << ".replace" << std::endl;
        return (1);
    }
    return (0);
}