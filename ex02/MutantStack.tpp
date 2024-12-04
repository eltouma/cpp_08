#pragma once
#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &obj) : std::stack<T>()
{
	*this = obj;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &rhs)
{
	if (this != &rhs)
		this->c = rhs.c;
	return (this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::insert(typename std::stack<T>::container_type::iterator pos, const int &n)
{
	return (this->c.insert(pos, n));
}

template <typename T>
void MutantStack<T>::insert(typename std::stack<T>::container_type::iterator pos, size_t size, const int &n)
{
	return (this->c.insert(pos, size, n));
}

template <typename T>
T& MutantStack<T>::first(void)
{
	return (this->c.at(0));
}

template <typename I>
void	print(I begin, I end)
{
	std::cout << std::endl;
	while (begin != end)
	{
		std::cout << *begin << " ";
		begin++;
	}
	std::cout << std::endl;
}

template <typename I>
void	printEnds(I mutant)
{
	std::cout << "Hello\n" << mutant;
}
