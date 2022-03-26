/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:10:48 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/16 16:17:13 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string   _name;
        const int           _requiredToSign;
        const int           _requiredToExecute;
        bool                _isSigned;
        static const int    _maxGrade = 1;
        static const int    _minGrade = 150;

        AForm();

        void    _checkFormGrade() const;

    public:
        AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
        AForm(const AForm &src);
        virtual ~AForm();

        AForm               &operator=(const AForm &newValue);
        const std::string   getFormName() const;
        bool                getSignedStatus() const;
        int                 getGradeToSign() const;
        int                 getGradeToExecute() const;
        void                beSigned(const Bureaucrat &bureaucrat);
        void                canBeExecute(const Bureaucrat &executor) const;
        virtual void        execute(const Bureaucrat &executor) const = 0;

        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return ("Grade too high!");
                }
        };

        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return ("Grade too low!");
                }
        };

        class FormNotSigned: public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return ("Form can't be executed because it isn't signed!");
                }
        };
};

std::ostream    &operator<<(std::ostream &o, const AForm &value);
#endif