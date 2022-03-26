/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 10:07:30 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/15 16:19:45 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << "----------- new IMateriaSource ---------" << std::endl;
	IMateriaSource *src = new MateriaSource();
	std::cout << "----------- learnMateria Ice -----------" << std::endl;
	src->learnMateria(new Ice());
	std::cout << "----------- learnMateria Cure ----------" << std::endl;
	src->learnMateria(new Cure());
	std::cout << "----------- new ICharacter me ----------" << std::endl;
	ICharacter *me = new Character("me");

	AMateria *tmp;
	std::cout << "----------- createMateria Ice ----------" << std::endl;
	tmp = src->createMateria("ice");
	std::cout << "----------- equip ICharacter Ice -------" << std::endl;
	me->equip(tmp);
	std::cout << "----------- createMateria Cure ---------" << std::endl;
	tmp = src->createMateria("cure");
	std::cout << "----------- equip ICharacter Cure ------" << std::endl;
	me->equip(tmp);

	std::cout << "----------- new ICharacter bob ---------" << std::endl;
	ICharacter *bob = new Character("bob");
    std::cout << "----------- use 0 bob ------------------" << std::endl;
	me->use(0, *bob);
	std::cout << "----------- use 1 bob ------------------" << std::endl;
	me->use(1, *bob);
	std::cout << "----------- delete data ----------------" << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}
