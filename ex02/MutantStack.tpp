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
typename MutantStack<T>::iterator MutantStack<T>::erase(typename std::stack<T>::container_type::iterator pos)
{
	return (this->c.erase(pos));
}

template <typename T>
//const MutantStack<T>& MutantStack<T>::back(void) const
T& MutantStack<T>::back(void)
{
	return (this->c.back());
}
