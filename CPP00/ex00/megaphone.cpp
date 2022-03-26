/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 14:32:02 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/05 15:48:50 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i = 1;
    int j;
    
    if (argc > 1) {
        while (argv[i]) {
            j = 0;
            while (argv[i][j]) {
                std::cout << (char)std::toupper(argv[i][j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    } else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }

}