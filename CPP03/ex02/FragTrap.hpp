/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:09:17 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/13 15:13:09 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:
    FragTrap();
public:
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(const FragTrap &src);

    FragTrap &operator=(const FragTrap &newValue);
    void highFivesGuys();
};
#endif