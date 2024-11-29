/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 16:56:28 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/29 17:39:29 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iterator>
#include <algorithm>

template <class T>
typename T::iterator easyfind(T &cont, int nb)
{
	typename T::iterator it = find(cont.begin(), cont.end(), nb);
	if (it == cont.end())
		// throw exception
		std::cerr << "Element not found\n";
	return (it);
}
