/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:27:01 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/19 19:31:52 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
    private:
        std::string _data;

    public:
        Data();
        Data(const Data &src);
        ~Data();

        Data        &operator=(const Data &newValue);
        void        setData(const std::string data);
        std::string getData() const;
};

#endif