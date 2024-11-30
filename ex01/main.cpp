/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:46:07 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/29 17:50:48 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
//# define SIZE 15000
# define SIZE 5

int	main(void)
{
	try {
		Span	arr(SIZE);
		size_t	vectorSize;

		try {
			arr.addNumber(7);
			arr.addNumber(9);
			arr.shortestSpan();
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		vectorSize = arr.getVector().size();
		if (vectorSize)
		{
			for (size_t i = 0; i < vectorSize; i++)
				std::cout << arr.getVector()[0] << ", ";
		}
		srand(time(NULL));
		for (size_t i = vectorSize; i < arr.getN(); i++)
		{
			arr.addNumber(rand());
			if (i != SIZE - 1)
				std::cout << arr.getVector()[i] << ", ";
			else
				std::cout << arr.getVector()[i];
		}
/*
		arr.addNumber(8);
		for (size_t i = 0; i < arr.getN(); i++)
			std::cout << arr.getVector()[i] << std::endl;
*/
		std::cout << std::endl;
		std::cout << arr.shortestSpan() << std::endl;
		return (0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
