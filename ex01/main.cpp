/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:46:07 by eltouma           #+#    #+#             */
/*   Updated: 2024/12/02 10:24:28 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
//# define SIZE 15000
# define SIZE 15

void	verif(Span &arr, int nb)
{
	try {
		arr.addNumber(nb);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main(void)
{
	try {
		Span	arr(SIZE);
		size_t	vectorSize;

		verif(arr, 7);
		verif(arr, -1);
		vectorSize = arr.getVector().size();
		if (vectorSize)
		{
			for (size_t i = 0; i < vectorSize; i++)
				std::cout << arr.getVector()[i] << ", ";
		}
		srand(time(NULL));
		for (size_t i = vectorSize; i < arr.getN() - 1; i++)
		{
		//	arr.addNumber(rand());
			arr.addNumber(rand() % 1000);
			if (i != arr.getN() - 1)
				std::cout << arr.getVector()[i] << ", ";
			else
				std::cout << arr.getVector()[i];
		}
		verif(arr, 30);
		std::cout << arr.getVector().back() << std::endl;
		verif(arr, 8);
		std::cout << "The shortest distance is: " << arr.shortestSpan() << std::endl;
		std::cout << "The longest distance is: " << arr.longestSpan() << std::endl;
		return (0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
