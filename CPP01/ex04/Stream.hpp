/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stream.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:13:08 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/09 11:23:41 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

class Stream
{
private:
    std::string     _fileName;
    std::string     _s1;
    std::string     _s2;
    std::string     _content;
public:
    Stream(std::string fileName, std::string s1, std::string s2);
    ~Stream();
    
    bool    read();
    void    replace();
    bool    save();
};