/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:03:00 by eltouma           #+#    #+#             */
/*   Updated: 2024/12/04 17:08:07 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <list>

void	draw_tab(const std::string& str)
{
	const int frame_width = 25;
	int padding = frame_width - (static_cast<int>(str.length()));
	int left_padding = padding / 2;
	int right_padding = padding - left_padding;

	std::cout << "\u250c";
	for (int i = 0; i < frame_width; i++)
		std::cout << "\u2500";
	std::cout << "\u2510\n";
	std::cout << "\u2502";
	for (int i = 0; i < left_padding; i++)
		std::cout << " ";
	std::cout << str;
	for (int i = 0; i < right_padding; i++)
		std::cout << " ";
	std::cout << "\u2502\n";
	std::cout << "\u2514";
	for (int i = 0; i < frame_width; i++)
		std::cout << "\u2500";
	std::cout << "\u2518\n\n";
}

void	printEnds(MutantStack<int> &mutant)
{
	std::cout << "First: " << mutant.first() << std::endl;
	std::cout << "Last: " << mutant.top() << std::endl;
	std::cout << "Size: " << mutant.size() << std::endl;
}

void	printEnds(std::list<int> lst)
{
	std::cout << "First: " << lst.front() << std::endl;
	std::cout << "Last: " << lst.back() << std::endl;
	std::cout << "Size: " << lst.size() << std::endl;
}

int	main(void)
{
	MutantStack<int> mutant;
	MutantStack<int>::iterator beginM;
	MutantStack<int>::iterator endM;
	std::list<int> lst;
	std::list<int>::iterator beginL;
	std::list<int>::iterator endL;

	draw_tab("MutantStack test");
	mutant.push(27);
	mutant.push(2);
	mutant.push(5);
	beginM = mutant.begin();
	endM = mutant.end();
	std::cout << "\nOriginal mutant" << std::endl;
	print(beginM, endM);
	printEnds(mutant);
	std::cout << "\nRemove last element" << std::endl;
	mutant.pop();
	beginM = mutant.begin();
	endM = mutant.end();
	print(beginM, endM);
	printEnds(mutant);
	for (size_t i = 2; i < 20; i+=2)
		mutant.push(i);
	std::cout << "\nInsert new elements" << std::endl;
	beginM = mutant.begin();
	endM = mutant.end();
	mutant.insert(endM, 3, 1952);
	beginM = mutant.begin();
	endM = mutant.end();
	mutant.insert(endM, 1948);
	beginM = mutant.begin();
	endM = mutant.end();
	print(beginM, endM);
	printEnds(mutant);

	std::cout << std::endl;
	std::cout << std::endl;
	draw_tab("List test");
	lst.push_back(27);
	lst.push_back(2);
	lst.push_back(5);
	beginL = lst.begin();
	endL = lst.end();
	std::cout << "\nOriginal list" << std::endl;
	print(beginL, endL);
	printEnds(lst);
	std::cout << "\nRemove last element" << std::endl;
	lst.pop_back();
	beginL = lst.begin();
	endL = lst.end();
	print(beginL, endL);
	printEnds(lst);
	for (size_t i = 2; i < 20; i+=2)
		lst.push_back(i);
	std::cout << "\nInsert new elements" << std::endl;
	beginL = lst.begin();
	endL = lst.end();
	lst.insert(endL, 3, 1952);
	beginL = lst.begin();
	endL = lst.end();
	lst.insert(endL, 1948);
	beginL = lst.begin();
	endL = lst.end();
	print(beginL, endL);
	printEnds(lst);

	return (0);
}
