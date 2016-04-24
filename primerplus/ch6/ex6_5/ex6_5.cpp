/*
 * ex6_6.cpp
 *
 *	The Kingdom of Neutronia, where the unit of currency is the tvarp,
 *	has the following income tax code:
 *
 *		First 5,000 tvarps: 0% tax
 *		Next 10,000 tvarps: 10% tax
 *		Next 20,000 tvarps: 15% tax
 *		Tvarps after 35,000: 20% tax
 *
 *	For example, someone earning 38000 tvarps would owe 5,000 x 0.00 +
 *	10,000 x 0.10 + 20,000 x 0.15 + 3,000 x 0.20, or 4,600 tvarps.
 *	Write a program what uses a loop to solicit incomes and to report
 *	tax owned.  The loop should terminated when the user enters a
 *	negative number or non-numeric input.
 *
 *  Created on: Apr 13, 2016
 *      Author: lamadd0x
 */

#include <iostream>

int main()
{
	std::cout << "Enter income: ";

	float rate[3] = {0.1, 0.15, 0.20};
	float income;
	float tax;

	while (std::cin >> income)
	{
		tax = 0;
		if (income < 0) break;

		if ( income - 5000 <= 0)
		{
			std::cout << "Tax is zero\n";
			std::cout << "Enter income: ";
			continue;
		}
		else
			income -= 5000;


		if (income - 10000 <= 0)
		{
			tax += income * rate[0];
			std::cout << "Tax is " << tax << ".\n";
			std::cout << "Enter income: ";
			continue;
		}
		else
			tax += 1000;

		income -= 10000;

		if (income - 20000 < 0)
		{
			tax += income * rate[1];
			std::cout << "Tax is " << tax << ".\n";
			std::cout << "Enter income: ";
			continue;
		}
		else
			tax += 3000;

		income -= 20000;

		tax += income * rate[2];
		std::cout << "Tax is " << tax << ".\n";
		std::cout << "Enter income: ";
	}
	return 0;
}



