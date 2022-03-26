/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:45:33 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/14 13:46:03 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WANIMAL_HPP
# define WANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &src);
        ~WrongAnimal();

        WrongAnimal          &operator=(const WrongAnimal &newValue);
        std::string     getType() const;
        virtual void    makeSound() const;        
};
#endif