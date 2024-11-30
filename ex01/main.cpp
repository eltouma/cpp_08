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
# define SIZE 10

int	main(void)
{
	try {
		Span arr(SIZE);
		srand(time(NULL));	
		for (int i = 0; i < SIZE; i++)
			arr.addNumber(rand());
		std::cout << arr.shortestSpan() << std::endl;
		return (0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
