/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:23:39 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/14 17:18:51 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
    protected:
        std::string type;
    public:
        virtual ~AAnimal();

        virtual AAnimal &operator=(const AAnimal &newValue) = 0;
        std::string     getType() const;
        virtual void    makeSound() const = 0;
        virtual Brain   *getBrain() const = 0;     
};
#endif