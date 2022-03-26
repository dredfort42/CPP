/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:24:16 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/16 20:24:25 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
    private:
        const std::string		_target;

        ShrubberyCreationForm();

    public:
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &src);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &newValue);

        const std::string	&getTarget() const;
        virtual void		execute(const Bureaucrat &executor) const;

};
#endif