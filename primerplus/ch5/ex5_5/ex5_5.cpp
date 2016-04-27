/*
 * ex5_5.cpp
 *
 *	Exercise 5: You sell the book C++ for Fools.  Write a program that
 *	has you enter a year's worth of Monthly Sales (in terms of number
 *	of books, not of money).  The program should use a loop to prompt
 *	you by month, using an array of char * (or an array of string
 *	objects, if you prefer) initialized to the month strings and storing
 *	the input data in an array of int. Then, the program should find
 *	the sum of the array contents and report the total sales for the
 *	year.
 *
 *  Created on: Apr 7, 2016
 *      Author: Larry Maddox
 */

#include <iostream>


int main()
{
	const char* month[12] = {"January", "February", "March", "April", "May",
			"June", "July", "August", "September", "October", "November",
			 "December"};

	int sales[12];
	int sum = 0;

	for (int i=0; i < 12;i++)
	{
		std::cout << "Enter sales for " << month[i] <<":";
		std::cin >> sales[i];
	}

	for (int i = 0; i < 12; i++)
		sum+= sales[i];


	std::cout << "Total Sales for the year are " << sum << ".\n";

	return 0;
}


