/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:47:40 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/14 13:48:34 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WCAT_HPP
# define WCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal 
{
    public:
        WrongCat();
        WrongCat(const WrongCat &src);
        ~WrongCat();

        WrongCat &operator=(const WrongCat &newValue);
        virtual void makeSound() const;        
};
#endif