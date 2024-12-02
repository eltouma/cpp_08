#pragma once
#include "easyfind.hpp"

const char * elementNotFoundException::what(void) const throw()
{
	return "Element not found";
}

template <class T>
typename T::iterator easyfind(T &cont, int nb)
{
	typename T::iterator it = find(cont.begin(), cont.end(), nb);
	if (it == cont.end())
		throw elementNotFoundException();
	return (it);
}

void	draw_tab(const std::string& str)
{
	const int frame_width = 25;
	int padding = frame_width - static_cast<int>(str.length());
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

template <class T>
void	verif(T &tab, int toFind)
{
	try {
		easyfind(tab, toFind);
		std::cout << toFind << ":\tfound" << std::endl;
		
	}
	catch (const std::exception &e)
	{
		std::cerr << toFind << ":\t";
		std::cerr << e.what() << std::endl;
	}
}
