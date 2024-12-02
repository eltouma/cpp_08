/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:46:07 by eltouma           #+#    #+#             */
/*   Updated: 2024/12/02 18:42:56 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	try {
		Span	vect(SIZE);
		std::vector<int> vectTest(5);
		size_t	vectorSize;
		std::vector<int>::iterator it;

		srand(time(NULL));
		isMaxReached(vect, rand() % 100);
		vectorSize = vect.getVector().size();
		draw_tab("Original size: ", vectorSize);
		std::cout << vect.getVector().back();
		isDistanceFound(vect);
		std::cout << std::endl;
		std::cout << std::endl;
		isMaxReached(vect, rand() % 10);
		vectorSize = vect.getVector().size();
		draw_tab("New size: ", vectorSize);
		if (vectorSize)
			print(vect, vectorSize);
		isDistanceFound(vect);
		for (size_t i = vectorSize; i < vect.getN() - 1; i++)
			vect.addNumber(rand());
		vectorSize = vect.getVector().size();
		std::cout << std::endl;
		std::cout << std::endl;
		draw_tab("New size: ", vectorSize + 1);
		print(vect, vectorSize);
		isMaxReached(vect, 30);
		std::cout << "\n\nTry to add " << vect.getVector().back() << " and 8 at the end." << std::endl;
		std::cout << vect.getVector().back() << " added.";
		isMaxReached(vect, 8);
		vectorSize = vect.getVector().size();
		std::cout << std::endl;
		print(vect, vectorSize);
		std::cout << std::endl;
		isDistanceFound(vect);
		std::cout << std::endl;
		std::cout << std::endl;
		it = vectTest.begin();
		vect.addNumber(vectTest.begin(), vectTest.end());
		vectorSize = vect.getVector().size();
		draw_tab("New size: ", vectorSize);
		print(vect, vectorSize);
		std::cout << std::endl;
		isDistanceFound(vect);
		return (0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
