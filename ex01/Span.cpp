/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:52:30 by eltouma           #+#    #+#             */
/*   Updated: 2024/12/02 21:19:21 by eltouma          ###   ########.fr       */
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

int	Span::longestSpan(void)
{
	long long	maxDiff;

	maxDiff = LLONG_MIN;
	if (this->_vect.size() < 2)
		throw Span::impossibleComparisonException();
	std::vector<int> sortedVect = this->_vect;
	std::sort(sortedVect.begin(), sortedVect.end());
	maxDiff = static_cast<long long>(sortedVect.back()- sortedVect.front());
	return (static_cast<int>(maxDiff));
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int> tmp;
	std::vector<int>::iterator it;

	for (it = begin; it != end; it++)
		tmp.push_back(rand() % 100);
	_vect.insert(_vect.end(), tmp.begin(), tmp.end());
}

const char * Span::maxReachedException::what() const throw()
{
	return "\nSorry, the maximum number has been reached. It is no longer possible to add one.";
}

const char * Span::impossibleComparisonException::what() const throw()
{
	return "\nSorry, there are not enough elements in the array to make a comparison";
}

void	draw_tab(const std::string& str, int nb)
{
	std::stringstream sstr;
	sstr << nb;
	const int frame_width = 25;
	int padding = frame_width - (static_cast<int>(str.length()) + sstr.str().length());
	int left_padding = padding / 2;
	int right_padding = padding - left_padding;

	std::cout << "\u250c";
	for (int i = 0; i < frame_width; i++)
		std::cout << "\u2500";
	std::cout << "\u2510\n";
	std::cout << "\u2502";
	for (int i = 0; i < left_padding; i++)
		std::cout << " ";
	std::cout << str << nb;
	for (int i = 0; i < right_padding; i++)
		std::cout << " ";
	std::cout << "\u2502\n";
	std::cout << "\u2514";
	for (int i = 0; i < frame_width; i++)
		std::cout << "\u2500";
	std::cout << "\u2518\n\n";
	std::cout << std::endl;
}

void	isDistanceFound(Span &vect)
{
	try {
		std::cout << "\n\nThe shortest distance is: " << vect.shortestSpan() << std::endl;
		std::cout << "The longest distance is: " << vect.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	isMaxReached(Span &vect, int nb)
{
	try {
		vect.addNumber(nb);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	print(Span &vect, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (i != size - 1)
			std::cout << vect.getVector()[i] << ", ";
		else
			std::cout << vect.getVector()[i];
	}
}
