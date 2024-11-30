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

unsigned int const &	Span::getN(void) const
{
	return (this->_n);
}

std::vector<int> const & Span::getVector(void) const
{
	return (this->_vect);
}

int	Span::shortestSpan(void)
{
	long long	minDiff;
	long long	diff;

	minDiff = LLONG_MAX;
	if (this->_vect.size() < 2)
		throw Span::impossibleComparisonException();
	std::vector<int> sortedVect = this->_vect;
	std::sort(sortedVect.begin(), sortedVect.end());
	for (size_t i = 1; i < sortedVect.size(); i++)
	{
		diff = static_cast<long long>(sortedVect[i] - sortedVect[i - 1]);
		if (diff < minDiff)
			minDiff = diff;
	}
	return (static_cast<int>(minDiff));
}

const char * Span::maxReachedException::what() const throw()
{
	return "Sorry, the maximum number has been reached. It is no longer possible to add one.";
}

const char * Span::impossibleComparisonException::what() const throw()
{
	return "Sorry, there are not enough elements in the array to make a comparison";
}
