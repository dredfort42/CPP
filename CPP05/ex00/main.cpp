/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:44:59 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/16 14:51:23 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat p1("p1", 149);
    Bureaucrat p2 = p1;

    p1.decrementGrade(1);
    std::cout << p1 << std::endl;

    p2.incrementGrade(148);
    std::cout << p2 << std::endl;

    p1.incrementGrade(145);
    std::cout << p1 << std::endl;
}