/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:23:22 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/09 21:59:10 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Karen
{
private:
    int     _filterLevel;

    void    debug();
    void    info();
    void    warning();
    void    error();
public:
    Karen(std::string filterLevel);
    ~Karen();
    
    void    complain(std::string level);
};

