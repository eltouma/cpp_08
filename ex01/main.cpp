/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:46:07 by eltouma           #+#    #+#             */
/*   Updated: 2024/12/02 17:00:40 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <string>
#include <sstream>

void	verif(Span &vect, int nb)
{
	try {
		vect.addNumber(nb);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	draw_tab(const std::string& str, int nb)
{
	std::stringstream sstr;
	sstr << nb;
	const int frame_width = 25;
	int padding = frame_width - (static_cast<int>(str.length()) + sstr.str().length());
	int left_padding = padding / 2;
	int right_padding = padding - left_padding;

	std::cout << "\u250c";
	for (int i = 0; i < frame_width; i++)
		std::cout << "\u2500";
	std::cout << "\u2510\n";
	std::cout << "\u2502";
	for (int i = 0; i < left_padding; i++)
		std::cout << " ";
	std::cout << str << nb;
	for (int i = 0; i < right_padding; i++)
		std::cout << " ";
	std::cout << "\u2502\n";
	std::cout << "\u2514";
	for (int i = 0; i < frame_width; i++)
		std::cout << "\u2500";
	std::cout << "\u2518\n\n";
}

int	main(void)
{
	try {
		Span	vect(SIZE);
		std::vector<int> vectTest(5);
		size_t	vectorSize;
		std::vector<int>::iterator it;

		srand(time(NULL));
		verif(vect, rand() % 100);
		verif(vect, rand() % 10);
		vectorSize = vect.getVector().size();
		draw_tab("Original size: ", vectorSize);
		if (vectorSize)
		{
			for (size_t i = 0; i < vectorSize; i++)
			{
				if (i != vectorSize - 1)
					std::cout << vect.getVector()[i] << ", ";
				else
					std::cout << vect.getVector()[i];
			}
		}
		try {
			vect.shortestSpan();
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		for (size_t i = vectorSize; i < vect.getN() - 1; i++)
			vect.addNumber(rand());
		vectorSize = vect.getVector().size();
		std::cout << std::endl;
		std::cout << std::endl;
		draw_tab("New size: ", vectorSize + 1);
		for (size_t i = 0; i < vectorSize; i++)
		{
			if (i != vectorSize - 1)
				std::cout << vect.getVector()[i] << ", ";
			else
				std::cout << vect.getVector()[i];
		}
		verif(vect, 30);
		std::cout << "\n\nTry to add " << vect.getVector().back() << " and 8 at the end." << std::endl;
		std::cout << vect.getVector().back() << " added.";
		verif(vect, 8);
		vectorSize = vect.getVector().size();
		std::cout << std::endl;
		for (size_t i = 0; i < vectorSize; i++)
		{
			if (i != vectorSize - 1)
				std::cout << vect.getVector()[i] << ", ";
			else
				std::cout << vect.getVector()[i];
		}
		std::cout << std::endl;
		std::cout << "\n\nThe shortest distance is: " << vect.shortestSpan() << std::endl;
		std::cout << "The longest distance is: " << vect.longestSpan() << std::endl;


		std::cout << std::endl;
		std::cout << std::endl;
		it = vectTest.begin();

		vect.insertNumber(vectTest.begin(), vectTest.end());
		vectorSize = vect.getVector().size();

		draw_tab("New size: ", vectorSize);
		for (size_t i = 0; i < vectorSize; i++)
		{
			if (i != vectorSize - 1)
				std::cout << vect.getVector()[i] << ", ";
			else
				std::cout << vect.getVector()[i];
		}
		std::cout << std::endl;
		std::cout << "\n\nThe shortest distance is: " << vect.shortestSpan() << std::endl;
		std::cout << "The longest distance is: " << vect.longestSpan() << std::endl;
		/*
		   for (size_t i = vectorSize; i < vect.getN() - 1; i++)
		   {
		   vect.addNumber(rand());
		   if (i != vect.getN() - 1)
		   std::cout << vect.getVector()[i] << ", ";
		   else
		   std::cout << vect.getVector()[i];
		   }
		 */
		/*
		   verif(vect, 30);
		   std::cout << vect.getVector().back() << std::endl;
		   verif(vect, 8);
		   vectorSize = vect.getVector().size();
		   draw_tab("Original size: ", vectorSize);
		   std::cout << "The shortest distance is: " << vect.shortestSpan() << std::endl;
		   std::cout << "The longest distance is: " << vect.longestSpan() << std::endl;


		   std::vector<int>::iterator it;

		   it = vectTest.begin();

		   vect.insertNumber(vectTest.begin(), vectTest.end());
		   vectorSize = vect.getVector().size();
		   draw_tab("Original size: ", vectorSize);
		   std::cout << "size:\t" << vectorSize << std::endl;
		   for (size_t i = 0; i < vectorSize; i++)
		   {
		   if (i != vectorSize - 1)
		   std::cout << vect.getVector()[i] << ", ";
		   else
		   std::cout << vect.getVector()[i];
		   }
		 */
		return (0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
