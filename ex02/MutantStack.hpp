/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:03:18 by eltouma           #+#    #+#             */
/*   Updated: 2024/12/02 21:11:00 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
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
	iterator begin(void);
	iterator end(void);
};

#include "MutantStack.tpp"

