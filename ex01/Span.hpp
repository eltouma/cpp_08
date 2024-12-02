/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:52:30 by eltouma           #+#    #+#             */
/*   Updated: 2024/12/02 18:43:52 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <string>
#include <sstream>

# define SIZE 15000

class	Span
{
	unsigned int _n;
	std::vector<int> _vect;

public:
	Span(void);
	Span(unsigned int N); 
	Span(const Span &obj); 
	Span& operator=(const Span &rhs);
	~Span(void);
	void addNumber(int n);
	int shortestSpan(void);
	int longestSpan(void);
	unsigned int const & getN(void) const;
	std::vector<int> const & getVector(void) const;
	void insertNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	class maxReachedException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class impossibleComparisonException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

void	draw_tab(const std::string& str, int nb);
void	isDistanceFound(Span &vect);
void	isMaxReached(Span &vect, int nb);
void	print(Span &vect, size_t size);
