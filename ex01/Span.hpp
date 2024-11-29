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
#include <algorithm>

// peut-etre passer le constr par defaut en prive. A voir.........mystere........
// IMPLEMENTER DANS LE .CPP

class	Span
{
	unsigned int _n;
	std::vector<int> _vect;

public:
	Span(void);
	Span(unsigned int N) : _n(N) {}
	~Span(void);
	// continuer la forme canonique
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
};
