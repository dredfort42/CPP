/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:16:51 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/15 15:40:48 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "[Character] default constructor called, " << _name << " was created" << std::endl;
	int i = 0;
	while (i < _inventorySize)
	{
		_inventory[i] = 0;
		i++;
	}
}

Character::Character(std::string name): _name(name) 
{
	std::cout << "[Character] attributed constructor called, " << _name << " was created" << std::endl;
	int i = 0;
	while (i < _inventorySize)
	{
		_inventory[i] = 0;
		i++;
	}
}

Character::Character(const Character &src)
{
	*this = src;
	std::cout << "[Character] copy constructor called, " << _name << " was created" << std::endl;
}

Character &Character::operator=(const Character &newValue)
{
	std::cout << "Character assignation operator called, " << newValue.getName() << " was created" << std::endl;
	_name = newValue.getName();
	int i = 0;
	while (i < _inventorySize)
	{
		_inventory[i] = 0;
		i++;
	}
	return (*this);
}

Character::~Character() {
	std::cout << "[Character] " << _name << " destructor called" << std::endl;
	int i = 0;
	while (i < _inventorySize)
	{
		delete _inventory[i];
		i++;
	}
}

const std::string &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	int i = 0;
	while (i < _inventorySize)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << "[Character] " << _name << " was equipped with " << m->getType() << std::endl;
			break;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	if (!_inventory[idx])
	{
		std::cout << "[Character] " << _name << " was unequipped with " << _inventory[idx]->getType() << std::endl;
		_inventory[idx] = 0;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (_inventory[idx])
	{
		_inventory[idx]->use(target);
		unequip(idx);
	}
}
