/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:10:48 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/16 16:17:13 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        const int           _requiredToSign;
        const int           _requiredToExecute;
        bool                _isSigned;
        static const int    _maxGrade = 1;
        static const int    _minGrade = 150;

        Form();

        void    _checkFormGrade() const;

    public:
        Form(const std::string name, const int gradeToSign, const int gradeToExecute);
        Form(const Form &src);
        ~Form();

        Form                &operator=(const Form &newValue);
        const std::string   getFormName() const;
        bool                getSignedStatus() const;
        int                 getGradeToSign() const;
        int                 getGradeToExecute() const;
        void                beSigned(const Bureaucrat &bureaucrat);

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
};

std::ostream    &operator<<(std::ostream &o, const Form &value);
#endif