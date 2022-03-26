/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:35:42 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/21 16:59:57 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
    private:
        unsigned int	_length;
        T		        *_array;

    public:
        Array<T>(): _length(0), _array(0)
        {
            std::cout << "Default constructor called" << std::endl;
        }

        Array<T>(const unsigned int length): _length(length)
        {
            std::cout << "Attributed constructor called" << std::endl;
            _array = new T[_length];
        }

        Array<T>(const Array<T> &src)
        {
            std::cout << "Copy constructor called" << std::endl;
            *this = src;
        }

        ~Array<T>()
        {
            std::cout << "Destructor called" << std::endl;
            if (_length)
                delete [] _array;
        }

        Array<T>	&operator=(const Array<T> &newValue)
        {
            std::cout << "Assignation overload called" << std::endl;
            if (_length)
                delete [] _array;
            _length = newValue._length;
            if (_length)
                _array = new T[_length];

            int i = 0;
            while (i < static_cast<int>(_length))
            {
                _array[i] = newValue._array[i];
                i++;
            }
            return *this;
        }
        
        T			&operator[](const unsigned int index) const
        {
            return (index >= _length ? throw std::overflow_error("Index out of bounds") : _array[index]);
        }

        int         size() const
        {
            return (_length);
        }
};

#endif