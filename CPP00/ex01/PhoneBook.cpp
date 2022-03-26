/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:45:15 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/06 13:50:55 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : cid(1), counter(0) {};

PhoneBook::~PhoneBook() {};

void    PhoneBook::addNewContact()
{
    if (counter == 8)
    {
        std::cout << std::endl << "\033[30;41m The oldest contact will be replaced by the new one! \033[0m" << std::endl;
        counter = 0;
    }
    book[counter].newContact(cid);
    cid++;
    counter++;
};

void    PhoneBook::displayContactsList()
{
    int i = 0;
    std::string cidInput;

    std::cout << std::endl;
    std::cout << "\033[4mIndex     |";
    std::cout << "First name|";
    std::cout << "Last name |";
    std::cout << "Nickname  \033[0m" << std::endl;
    while (i < 8 && i < (cid - 1))
    {
        book[i].displayContact();
        i++;
    }
    std::cout << std::endl << "\033[34mInput an index to display all details of the contact.\033[0m" << std::endl;
    std::cout << "Index: ";
    std::cin >> cidInput;
    i = 0;
    while (i < 8 && i < (cid - 1) && std::to_string(book[i].index) != cidInput)
        i++;
    if (std::to_string(book[i].index) == cidInput)
        book[i].displayDetailed();
    else
         std::cout << std::endl << "\033[30;41m Wrong index \033[0m" << std::endl << std::endl;
};
