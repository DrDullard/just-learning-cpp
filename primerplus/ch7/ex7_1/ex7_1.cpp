/*
 * ex7_1.cpp
 *
 *	Write a program that repeatedly asks the user to enter pairs of
 *	numbers until at least one of the pair is zero.  For each pair,
 *	the program should use a function to calculate the harmonic mean
 *	of the numbers. The function should return the answer to main(),
 *	which should report the result. The harmonic mean of the numbers
 *	is the inverse of the average of the inverses and can be calculated
 *	as follows:
 *
 *	harmonic mean = 2.0 * x * y / (x + y)
 *
 *  Created on: Apr 16, 2016
 *      Author: lamadd0x
 */

#include <iostream>

float hmean( float x, float y );

int main()
{
	std::cout << "Enter a pair of numbers (0 will exit): ";

	float x, y;

	std::cin >> x;

	if (std::cin >> y == '\n')
		(std::cin >> y).get();

	while ((x != 0) && (y != 0))
	{
		float hm = hmean(x, y);

		std::cout << "The harmonic mean of " << x << " and " << y
				  << " is " << hm << std::endl
				  << "Please enter a new pair of numbers: ";

		std::cin >> x;

		if (std::cin >>y == '\n')
			(std::cin >> y).get();
	}

	std::cout << "Bye!\n";

	return 0;
}

float hmean(float x, float y)
{
	return 2.0 * x * y / (x + y);
}


