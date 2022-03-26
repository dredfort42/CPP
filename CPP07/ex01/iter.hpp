/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:15:14 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/21 16:28:16 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void    iter(const T *array, const unsigned &length, void (*function)(const T &))
{
    int i = 0;

    while (i < static_cast<int>(length))
    {
        function(array[i]);
        i++;
    }
}
#endif