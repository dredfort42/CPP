/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:38:35 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/14 19:28:13 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal 
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &src);
        ~Dog();

        Dog &operator=(const Dog &newValue);
        virtual void makeSound() const;
        virtual Brain   *getBrain() const;        
};
#endif