/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:45:18 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/06 14:24:58 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
public:

    PhoneBook();
    ~PhoneBook();

    void    addNewContact();
    void    displayContactsList();

private:

    Contact     book[8];
    int         cid;
    int         counter;

};

#endif