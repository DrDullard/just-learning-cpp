/*
 * ex5_10.cpp
 *
 *  Exercise 10: Write a program using nested loops that asks the user
 *  to enter a value for the number of rows to display. It should then
 *  display that many rows of asterisks, with one asterisk in the
 *  first row, two in the second row, and so on. For each row, the
 *  asterisks are preceded by the number of periods needed to make
 *  all the rows display a toal number of characters equal to the
 *  number of rows. A sample run would look like the following:
 *
 *  Enter the number of rows: 5
 *  ....*
 *  ...**
 *  ..***
 *  .****
 *  *****
 *
 *  Created on: Apr 11, 2016
 *      Author: Larry Maddox
 */

#include <iostream>

int main()
{
	std::cout << "Enter the number of rows: ";

	int row;
	std::cin >> row;

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= row - i; j++)
		{
			std::cout << ".";
		}
		for (int j = row - i; j < row; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	return 0;
}


