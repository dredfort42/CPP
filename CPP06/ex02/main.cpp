/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:17:40 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/19 20:26:39 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Base.hpp"

Base	*generate( void )
{
	switch (rand() % 3)
	{
		case 0:
			std::cout << "[GENERATED: A] >> ";
			return new A();
			break;
		case 1:
			std::cout << "[GENERATED: B] >> ";
			return new B();
			break;
		case 2:
			std::cout << "[GENERATED: C] >> ";
			return new C();
			break;
		default:
			return 0;
			break;
	}
}

void	identify(Base *p)
{
	A	*a;
	B	*b;
	C	*c;

	if ((a = dynamic_cast<A *>(p)))
		std::cout << "The actual type of the object is \033[32mA\033[0m" << std::endl;
	else if ((b = dynamic_cast<B *>(p)))
		std::cout << "The actual type of the object is \033[32mB\033[0m" << std::endl;
	else if ((c = dynamic_cast<C *>(p)))
		std::cout << "The actual type of the object is \033[32mC\033[0m" << std::endl;
	else
		std::cout << "The actual type of the object is \033[32mUNKNOWN\033[0m" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "The actual type of the object is \033[32mA\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "The actual type of the object is \033[32mB\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "The actual type of the object is \033[32mC\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
}

int main()
{
	int i;
	Base *base;

	i = 0;
	std::cout << std::endl << "\033[31m### Dynamic cast with pointers ###\033[0m" << std::endl;
	while (i < 10)
	{
		base = generate();
		identify(base);
		delete base;
		i++;
	}

	i = 0;
	std::cout << std::endl << "\033[31m### Dynamic cast with references ###\033[0m" << std::endl;
	while (i < 10)
	{
		base = generate();
		identify(*base);
		delete base;
		i++;
	}
}