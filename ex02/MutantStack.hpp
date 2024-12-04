/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:03:18 by eltouma           #+#    #+#             */
/*   Updated: 2024/12/04 17:06:37 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void);
	~MutantStack(void);
	MutantStack(const MutantStack &obj);
	MutantStack& operator=(const MutantStack &rhs);

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	iterator begin(void);
	iterator end(void);
	iterator insert(typename std::stack<T>::container_type::iterator pos, const int &n);
	void insert(typename std::stack<T>::container_type::iterator pos, size_t size, const int &n);
	T& first(void);
};

template <typename I>
void	print(I begin, I end);

#include "MutantStack.tpp"

