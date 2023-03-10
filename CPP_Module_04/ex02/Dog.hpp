/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 03:02:29 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/06 21:19:55 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal{
	private:
		Brain *brain;
	protected:
		std::string type;
	public:
		Dog();
		Dog(const Dog& acopy);
		Dog& operator = (const Dog& acopy);
		~Dog(void);
		void makeSound() const;
};

#endif
