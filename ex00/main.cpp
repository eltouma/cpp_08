/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:31:30 by eltouma           #+#    #+#             */
/*   Updated: 2024/12/02 13:40:45 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "easyfind.tpp"

int	main(void)
{
	std::list<int> lst;
	std::vector<int> vect;
	std::deque<int> deq;

	for (int i = 0; i < SIZE; i++)
	{
		lst.push_back(i);
		vect.push_back(i);
		deq.push_back(i);
	}
	draw_tab("Test with list");
	std::cout << "lst size: " << lst.size() << std::endl;
	verif(lst, lst.front());
	verif(lst, 3);
	verif(lst, lst.back());
	verif(lst, 150);
	verif(lst, -1);
	std::cout << std::endl;
	draw_tab("Test with vector");
	std::cout << "vector size: " << vect.size() << std::endl;
	verif(vect, vect.front());
	verif(vect, 1200);
	verif(vect, vect.back() + 1);
	verif(vect, 15);
	verif(vect, 8);
	std::cout << std::endl;
	draw_tab("Test with deque");
	std::cout << "deque original size: " << deq.size() << std::endl;
	verif(deq, 24);
	verif(deq, 91);
	deq.resize(SIZE / 2);
	std::cout << "deque new size: " << deq.size() << std::endl;
	verif(deq, 24);
	verif(deq, 91);
	return (0);
}
