/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:50:45 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/15 16:12:27 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "[MateriaSource] default constructor called" << std::endl;
	int i = 0;
	while (i < _materiaSize)
	{
		_materia[i] = 0;
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "[MateriaSource] copy constructor called" << std::endl;
	*this = src;
	int i = 0;
	while (i < _materiaSize)
	{
		if (_materia[i]) 			
			delete _materia[i];
		if (src._materia[i])
			_materia[i] = src._materia[i]->clone();
		else
			_materia[i] = 0;
		i++;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &newValue)
{
	std::cout << "[MateriaSource] assignation operator called" << std::endl;
	int i = 0;
	while (i < _materiaSize)
	{	
		if (_materia[i])
			delete _materia[i];
		if (newValue._materia[i])
			_materia[i] = newValue._materia[i]->clone();
		else
			_materia[i] = 0;
		i++;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "[MateriaSource] destructor called" << std::endl;
	int i = 0;
	while (i < _materiaSize)
	{
		if (this->_materia[i])
			delete this->_materia[i];
		i++;
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;
	while (i < _materiaSize)
	{
		if (!_materia[i] && m)
		{
			_materia[i] = m;
			std::cout << "[MateriaSource] learn Materia " << m->getType() << std::endl;
			break;
		}
		i++;
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	int i = 0;
	while (i < _materiaSize)
	{
		if (_materia[i] && !_materia[i]->getType().compare(type))
				return _materia[i]->clone();
		i++;
	}
	return (0);
}
