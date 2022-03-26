/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:23:57 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/08 18:21:27 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon      *_weapon;
public:
    HumanB(std::string name);
    ~HumanB();


    void setWeapon(Weapon &weapon);
    void attack();
};