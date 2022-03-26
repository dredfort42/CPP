/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:33:11 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/13 17:35:59 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
    DiamondTrap();
    
    std::string _name;
public:
    DiamondTrap(const std::string name);
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap &src);

    DiamondTrap &operator=(const DiamondTrap &newValue);
    
    void whoAmI();
};

#endif