/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:27:57 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/14 17:06:16 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    public:
        std::string ideas[100];

        Brain();
        Brain(const Brain &src);
        ~Brain();

        Brain          &operator=(const Brain &newValue);
}; 
#endif