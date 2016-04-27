/*
 * ex5_6.cpp
 *
 * Exercise 6: Do Programming Exercise 5, but use a two-dimensional
 * array to store input for three years of monthly sales.  Report the
 * total sales for each individual year and for the combined years.
 *
 *  Created on: Apr 8, 2016
 *      Author: Larry Maddox
 */


#include <iostream>


int main()
{
	const char* month[12] = {"January", "February", "March", "April", "May",
			"June", "July", "August", "September", "October", "November",
			 "December"};

	int sales[12][3];
	int sum[3] = {0,0,0};

	for (int i=0; i < 12;i++)
	{
		std::cout << "Enter sales for " << month[i] <<". " << std::endl;
		for (int j = 0; j < 3; j++)
		{
			std::cout << "Year " << j + 1 << ": ";
			std::cin >> sales[i][j];
			sum[j] += sales[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Total sales for year " << i + 1 << " are "
				  << sum[i] << ".\n";
	}

	std::cout << "Total three year sales are "
			  << sum[0] + sum[1] + sum[2] << ".\n";

	return 0;
}

