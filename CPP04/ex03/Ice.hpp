/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:21:31 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/15 15:49:34 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &src);
		virtual ~Ice();

		Ice &operator=(const Ice &newValue);
		
		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
};

#endif