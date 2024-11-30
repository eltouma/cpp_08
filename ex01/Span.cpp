/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:52:30 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/29 18:28:04 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _n(0) 
{
}

Span::~Span(void)
{
}

Span::Span(unsigned int N) : _n(N) 
{
}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span& Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_vect = rhs._vect;
		this->_n = rhs._n;
	}
	return (*this);
}

void	Span::addNumber(int n) 
{
	if (this->_vect.size() == _n)
		throw Span::maxReachedException();
	this->_vect.push_back(n);
}

int	Span::shortestSpan(void)
{
	int	diff;

	diff = INT_MAX;
	if (this->_vect.size() < 2)
		throw Span::arrayTooShortException();
	for (size_t i = 0; i < this->_vect.size() - 1; i++)
	{
		for (size_t j = i + 1; j < this->_vect.size(); j++)
			if (abs(this->_vect[i] - this->_vect[j]) < diff)
				diff = abs(this->_vect[i] - this->_vect[j]);
	}
	std::cout << diff << std::endl;
	return (diff);
}

const char * Span::maxReachedException::what() const throw()
{
	return "Sorry, the maximum number has been reached. It is no longer possible to add one.";
}

const char * Span::arrayTooShortException::what() const throw()
{
	return "Sorry, there are not enough elements in the array to make a comparison";
}
