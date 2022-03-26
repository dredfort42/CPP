/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:39:45 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/15 15:57:53 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		static const int	_materiaSize = 4;
		AMateria 			*_materia[_materiaSize];
		
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		virtual ~MateriaSource();

		MateriaSource &operator=(const MateriaSource &newValue);
		
		virtual void 		learnMateria(AMateria *);
		virtual AMateria 	*createMateria(const std::string &type);
};

#endif
 