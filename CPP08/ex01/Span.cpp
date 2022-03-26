/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:50:08 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/22 18:56:53 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

Span::Span(): _n(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int n): _n(n)
{
    std::cout << "Attributed constructor called" << std::endl; 
}

Span::Span(const Span &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Span::~Span()
{
    std::cout << "Destructor called" << std::endl;
}

Span    &Span::operator=(const Span &newValue)
{
    std::cout << "Assignment operator called" << std::endl;
    _n = newValue._n;
    _container = newValue._container;
    return *this;
}

void    Span::addNumber(int num)
{
    if (_container.size() == _n)
        throw std::overflow_error("Container is full");
    else
    {
        std::cout << "Num: " << num << " added to container" << std::endl;
        _container.push_back(num);
    }
}

void    Span::improvedAddNumber(std::vector<int>::iterator begin,
                                std::vector<int>::iterator end)
{
    std::vector<int>    tmpContainer(begin, end);
    if (_n < tmpContainer.size())
        throw std::range_error("Container smaller than current");
    else
        copy(tmpContainer.begin(), tmpContainer.end(), std::back_inserter(_container));
}

int	Span::shortestSpan() const
{
	std::vector<int>			tmp = _container;
	int							result = -1;

	if (_container.size() < 2)
		throw std::logic_error("No span can be found");
	sort(tmp.begin(), tmp.end());
	result = *(tmp.begin() + 1) - *tmp.begin();
	for (std::vector<int>::iterator	iter = tmp.begin() + 1;
            iter != tmp.end() - 1&& result != 0; iter++)
	{
		if (*(iter + 1) - *iter < result)
			result = *(iter + 1) - *iter;
	}
	return result;
}

int	Span::longestSpan() const
{
	std::vector<int>			tmp = _container;

	if (_container.size() < 2)
		throw std::logic_error("No span can be found");
	sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}