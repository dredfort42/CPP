/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 10:55:07 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/15 15:42:42 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure &src);
		virtual ~Cure();

		Cure &operator=(const Cure &newValue);
		
		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
};

#endif