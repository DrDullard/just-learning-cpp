/*
 * ex6_2.cpp
 *
 * Exercise 2: Write a program that reads up to 10 donation values into
 * an array of double. (Or, if you prefer, use an array template object.)
 * The program should terminate input on non-numeric input.  It should
 * report the average of the numbers and also report how many numbers
 * in the array are larger than the average.
 *
 *  Created on: Apr 11, 2016
 *      Author: Larry Maddox
 */

#include <iostream>

const int ArSize = 10;

int main()
{
	double donations[ArSize];

	std::cout << "Enter donation values.\n";

	int i = 0;

	std::cout << "Donation #" << i+1 << ": ";

	double sum = 0.;

	while(i < ArSize)
	{
		if (std::cin >> donations[i])
		{
			i++;
			std::cout << "Donation #" << i+1 << ": ";
			sum += donations[i];
		}
		else
			break;
	}

	if (sum != 0.)
	{
		double avg = sum/i;
		int over = 0;

		for (int j = i; j >= 0; j--)
			if(donations[j] > avg)
				over++;

		std::cout << "The number of donations over the average of "
				  << avg << " is " << over << ".\n";
	}
	else
		std::cout << "No data entered.\n";

	return 0;
}


