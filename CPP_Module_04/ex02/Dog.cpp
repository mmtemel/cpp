/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 03:02:16 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/10 18:05:50 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "\033[1;35mDOG DEFAULT CONSTRUCTOR CALLED\033[0m" << std::endl;
	this->setType("Dog");
	this->brain = new Brain();
}

Dog::Dog(const Dog& acopy) : Animal()
{
	*this = acopy;
	std::cout << "\033[1;35mDOG COPY CONSTRUCTOR CALLED\033[0m" << std::endl;
}
Dog& Dog::operator = (const Dog& acopy)
{
	setType(acopy.getType());
	delete this->brain;
	this->brain = new Brain(*acopy.brain);
	std::cout << "\033[1;35mDOG OPERATOR ASSIGNMENT CALLED\033[0m" << std::endl;
	return(*this);
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "\033[1;35mDOG DESTRUCTOR CALLED\033[0m" << std::endl;
}

/*void Dog::setType(std::string sType)
{
	this->type = sType;
}

std::string Dog::getType(void) const
{
	return(this->type);
}
*/
void Dog::makeSound() const
{
	std::cout << "\033[1;35mAnimal " << this->getType() << " makes sound hav hav!\033[0m" << std::endl;
}
