/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:41:20 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/22 20:54:41 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
    private:
        unsigned int        _n;
        std::vector<int>    _container;

        Span();
    public:
        Span(const unsigned int n);
        Span(const Span &src);
        ~Span();

        Span    &operator=(const Span &newValue);

        void    addNumber(int num);
        void    improvedAddNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int     shortestSpan() const;
        int     longestSpan() const;
};
#endif