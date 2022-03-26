/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:05:52 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/21 16:08:04 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void    swap(T &la, T &ra)
{
    T   tmp = la;
    la = ra;
    ra = tmp;
}

template<typename T>
const T &min(const T &la, const T &ra)
{
    return (la < ra ? la : ra);
}

template<typename T>
const T &max(const T &la, const T &ra)
{
    if (la == ra)
        return (ra);
    return (la > ra ? la : ra);
}
#endif