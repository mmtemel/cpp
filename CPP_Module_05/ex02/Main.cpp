/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:42:15 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/12 20:12:00 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

int main()
{
	Bureaucrat bro("Memur", 20);
	std::cout << bro << std::endl;
	std::cout<<"---1---"<<std::endl;
	//Form f("Rapor", 200, -5);
	AForm f("Rapor", 50, 70);
	std::cout << f << std::endl;
	bro.signForm(f);
	std::cout<<"---2---"<<std::endl;
	bro.decrement(170);
	f.beSigned(bro);
	bro.signForm(f);
	std::cout << bro << std::endl;
	bro.increment(170);
	f.beSigned(bro);
	bro.signForm(f);
	std::cout << f << std::endl;

	return 0;
}
