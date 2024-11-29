/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:31:30 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/29 17:41:05 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#define SIZE 10

// Test avec vector et deque
int	main(void)
{

	std::list<int> lst;
	for (int i = 0; i < SIZE; i++)
		lst.push_back(i);
	std::cout << "1er element\t" << lst.front() << std::endl;
	std::cout << "dernier element\t" << lst.back() << std::endl;
	return (0);
}
