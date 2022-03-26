/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:16:55 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/14 17:20:15 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal 
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &src);
        ~Cat();

        Cat             &operator=(const Cat &newValue);
        virtual AAnimal &operator=(const AAnimal &newValue);
        virtual void     makeSound() const;
        virtual Brain   *getBrain() const;        
};
#endif