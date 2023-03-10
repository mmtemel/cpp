/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:45:56 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/23 12:34:03 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack(){};
		~MutantStack(){ this->c.clear(); };
		MutantStack(const MutantStack &copy) : std::stack<T>(copy)
		{
			this->c = copy.c;
		}
		MutantStack& operator=(const MutantStack& copy)
		{
			this->c = copy.c;
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
};
