/*
 * ex5_3.cpp
 *
 * Exercise 3: Write a program that asks the user to enter an integer
 * and then prints the cumulative sum of the integers entered to date.
 * Have the program terminate when the user enters 0.
 *
 *  Created on: Apr 6, 2016
 *      Author: Larry Maddox
 */

#include <iostream>

int main()
{
	int sum = 0;
	int inp = 1;

	while (inp != 0)
	{
		std::cout << "Enter an integer: ";
		std::cin >> inp;
		sum += inp;
		std::cout << "Cumulative Sum: " << sum << std::endl;
	}

	return 0;

}


