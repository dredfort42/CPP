/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:41:57 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/16 14:41:09 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade; //1 - max 150 - min
        static const int    _maxGrade = 1;
        static const int    _minGrade = 150;

        Bureaucrat();
        void    _checkGrade() const;

    public:
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &src);
        ~Bureaucrat();

        Bureaucrat          &operator=(const Bureaucrat &newValue);
        const std::string   getName() const;
        int                 getGrade() const;
        void                incrementGrade(int value);
        void                decrementGrade(int value);

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

std::ostream    &operator<<(std::ostream &o, const Bureaucrat &value);
#endif