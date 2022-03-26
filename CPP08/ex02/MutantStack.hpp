/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:08:34 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/22 19:19:25 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack<T>() {}
        MutantStack<T>(const MutantStack<T> &src) {*this = src;}
        ~MutantStack<T>() {}

        MutantStack<T>	&operator=(const MutantStack<T> &newValue)
        {
            (void)newValue;
            return *this;
        }

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator	begin() {return this->c.begin();}
        iterator	end() {return this->c.end();}
};
#endif