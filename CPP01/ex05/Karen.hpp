/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:55:25 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/09 21:47:06 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Karen
{
private:
    void    debug();
    void    info();
    void    warning();
    void    error();
public:
    Karen();
    ~Karen();

    void    complain(std::string level);
};