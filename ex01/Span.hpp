/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:52:30 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/29 18:28:04 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

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
	unsigned int const & getN(void) const;
	std::vector<int> const & getVector(void) const;

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

	// continuer la forme canonique
/*
	addNumber(int n) // Si n EST 10, throw une except si on tente d'en ajouter un onzieme
	{
		if (this->_vect.size() == _n)
		//	throw exception
			return ;
		this->_vect.push_back(n);
	}
	shortestSpan(std::vector<int> vect)
	{
		std::sort(vect.begin(), vect.end());
	}
//	longestSpan(std::vector<int> vect);
*/
};
