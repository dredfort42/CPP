/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 06:44:01 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/06 13:50:53 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook   contacts;
    bool exit = false;
    std::string command;

    std::cout << std::endl << "\033[4;36mThe program accepts ADD, SEARCH and EXIT commands.\033[0m" << std::endl << std::endl;
    while (!exit)
    {
        std::cout << "\033[32mInput command: ";
        std::cin >> command;
        std::cout << "\033[0m";
        if (command == "EXIT")
            exit = true;
        else if (command == "ADD")
            contacts.addNewContact();
        else if (command == "SEARCH")
            contacts.displayContactsList();
        else
            std::cout << "Invalid input, please try again!" << std::endl;
    } 
}