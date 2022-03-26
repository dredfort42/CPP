/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:32:50 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/17 09:34:55 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
    private:
        const std::string _target;

        RobotomyRequestForm();

    public:
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &src);
        ~RobotomyRequestForm();

        RobotomyRequestForm	&operator=(const RobotomyRequestForm &newValue);

        const std::string	&getTarget() const;
        virtual void		execute(const Bureaucrat &executor) const;

};
#endif