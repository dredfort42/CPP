/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 10:35:52 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/15 15:40:06 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		Character();

		std::string			_name;
		static const int	_inventorySize = 4;
		AMateria			*_inventory[_inventorySize];
		
	public:
		Character(std::string name);
		Character(const Character &src);
		Character &operator=(const Character &newValue);
		virtual ~Character();

		virtual const std::string	&getName() const;
		virtual void 				equip(AMateria *m);
		virtual void 				unequip(int idx);
		virtual void 				use(int idx, ICharacter &target);
};

#endif