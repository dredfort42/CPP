/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:09:30 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/13 15:06:54 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
    
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap &src);

    ScavTrap &operator=(const ScavTrap &newValue);
    void guardGate();
};
#endif