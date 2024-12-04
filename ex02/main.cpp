/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:03:00 by eltouma           #+#    #+#             */
/*   Updated: 2024/12/04 11:51:54 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <list>

int	main()
{
	MutantStack<int> mutant;
	mutant.push(5);
	mutant.begin();
	mutant.push(17);
	std::cout << "top:\t" << mutant.top() << std::endl;
//	mutant.pop();
	std::cout << "now top:\t" << mutant.top() << std::endl;
	std::cout << "size:\t" << mutant.size() << std::endl;
	mutant.push(3);
	mutant.push(5);
	mutant.push(737);
	//[...]
	mutant.push(0);
	MutantStack<int>::iterator it = mutant.begin();
	MutantStack<int>::iterator ite = mutant.end();
//	std::cout << "size:\t" << mutant.size() << std::endl;
	std::cout << std::endl;
	std::cout << "top:\t" << mutant.top() << std::endl;
	std::cout << "last before insert 24:\t" << mutant.back() << std::endl;
	std::cout << std::endl;
	mutant.insert(ite, 24);
	std::cout << "top after insert 24:\t" << mutant.top() << std::endl;
	std::cout << "last after insert 24 and before insert 91:\t" << mutant.back() << std::endl;
	std::cout << std::endl;
	ite = mutant.end();
	it = mutant.begin();
	mutant.insert(ite, 1991);
	std::cout << "top after insert 91:\t" << mutant.top() << std::endl;
	std::cout << "last after insert 91:\t" << mutant.back() << std::endl;
	std::cout << std::endl;
//	std::cout << "After insert size:\t" << mutant.size() << std::endl;
	ite = mutant.end();
	it = mutant.begin();
	it++;
	it++;
//	it = mutant.begin();
	mutant.erase(it);
	it = mutant.begin();
//	--it;
	while (it < ite)
	{
		std::cout << "element\t" << *it << std::endl;
		++it;
	}
	//std::cout << "last:\t" << mutant.back() << std::endl;
//	const MutantStack<int> s;
	//std::stack<int> s(mutant);
//	std::cout << "last:\t" << mutant.back() << std::endl;
	return 0;
}
/*
   int	main(void)
   {
   MutantStack<int> mutant;

   std::list<int>::iterator lst = lst.push_back(5);
   std::list<int>::iterator lit = mutant.size();

   std::cout << "size:\t" << lit;
   }*/
