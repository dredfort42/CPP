/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:22:47 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/17 14:42:26 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp" 

class Intern
{
    public:
        Intern();
        Intern(const Intern &src);
        ~Intern();

        Intern  &operator=(const Intern &newValue);
        AForm   *makeForm(std::string formName, std::string target);

        class UnknownForm:public std::exception { 
            const char* what() const throw(); 
        };

};
#endif