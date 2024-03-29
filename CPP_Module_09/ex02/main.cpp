/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:42:33 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/02 23:12:17 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	// std::cout << clock() << std::endl;
	PmergeMe merge;
	if (merge.argErrorHandler(argc, argv) != 0)
		return (1);

	//std::cout << std::fixed << tv1 << std::endl;
	merge.addVector(&argv[1], &merge.vector);
	// std::cout << "Before:	"; merge.printVec(merge.vector);
	clock_t tv1 = clock();
	merge.mergesortVec(merge.vector, 0, merge.total_vector - 1);
	// std::cout << "After:	"; merge.printVec(merge.vector);
	clock_t tv2 = clock();
	double	time_v = double(tv2 - tv1) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << merge.total_vector << " elements with std::vector : ";
	std::cout << std::fixed << time_v << " us" << std::endl;
	//std::cout << tv2 << std::endl;

	std::cout << "--------------------------" << std::endl;

	//std::cout << td1 << std::endl;
	merge.addDeque(&argv[1], &merge.deque);
	// std::cout << "Before:	"; merge.printDeque(merge.deque);
	clock_t td1 = clock();
	merge.mergesortDeque(merge.deque, 0, merge.total_deque - 1);
	// std::cout << "After:	"; merge.printDeque(merge.deque);
	clock_t td2 = clock();
	double	time_d = double(td2 - td1) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << merge.total_deque << " elements with std::deque : ";
	std::cout << std::fixed << time_d << " us" << std::endl;
	//std::cout << td2 << std::endl;
}