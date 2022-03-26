/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:12:55 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/22 11:01:06 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template<typename T>
typename T::iterator    easyfind(T &container, int arg)
{
    typename T::iterator iter = find(container.begin(), container.end(), arg);
    if (container.begin() == container.end())
        throw std::overflow_error("Container is empty");
    else if (iter == container.end())
        throw std::overflow_error("No occurrence is found");
    else
        return iter;
}
#endif