/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:54:42 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/17 09:55:43 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    private:
        const std::string _target;

        PresidentialPardonForm();

    public:
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &src);
        ~PresidentialPardonForm();

        PresidentialPardonForm	&operator=(const PresidentialPardonForm &newValue);

        const std::string	&getTarget() const;
        virtual void		execute(const Bureaucrat &executor) const;

};
#endif