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
