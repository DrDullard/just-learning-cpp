/*
 * ex5_9.cpp
 *
 *	Exercise 9: Write a program that matches the description of the
 *	program in Programming Exercise 8, but ise a string class object
 *	instead of an array. Include the string header file and use a
 *	relational operator to make the comparison test.
 *
 *  Created on: Apr 11, 2016
 *      Author: Larry Maddox
 */

#include <iostream>
#include <string>
int main()
{
	std::string wd;

	int i = 0;

	std::cout << "Enter words (to stop, type the word done):\n";
	do
	{
		(std::cin >> wd).get();
		i++;
	}
	while (wd != "done");

	std::cout << "You entered a total of " << i - 1 << " words.\n";

	return 0;

}



