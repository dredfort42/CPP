/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:12:58 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/15 15:25:12 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:
		AMateria(void);

	protected:
		std::string type;
		
	public:
		AMateria(const AMateria &src);
		virtual ~AMateria();
		AMateria(const std::string &type);

		AMateria &operator=(const AMateria &newValue);
		
		const std::string  	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target) = 0;
};

#endif