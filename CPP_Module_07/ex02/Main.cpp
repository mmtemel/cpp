/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 02:39:33 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/22 11:52:59 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 5
#include <cstdlib>
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

	//SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
		//for (int i = 0; i < MAX_VAL; i++)
    	//{
		//	std::cout << numbers[i] << std::endl;
		//	std::cout << test[i] << std::endl;
		//	std::cout << tmp[i] << std::endl;
    	//}
    }

	//std::cout << "GG" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
		//std::cout << numbers[i] << std::endl;
        numbers[i] = rand();
    }
    delete [] mirror;

	//system("leaks Array");
    return 0;
}
