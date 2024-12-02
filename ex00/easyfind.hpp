/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 16:56:28 by eltouma           #+#    #+#             */
/*   Updated: 2024/12/02 13:32:11 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>
#include <deque>

# define SIZE 100

class	elementNotFoundException : public std::exception
{
	public:
		const char *what() const throw();
};

template <class T>
typename T::iterator easyfind(T &cont, int nb);

template <class T>
void	verif(T &tab, int toFind);

void	draw_tab(const std::string& str);

#include "easyfind.tpp"
