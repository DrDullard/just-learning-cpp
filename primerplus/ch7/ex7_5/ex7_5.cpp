/*
 * ex7_5.cpp
 *
 *	Define a recursive function that takes an integer argument and
 *	returns the factorial of that argument. Recall that 3 factorial,
 *	written 3!, equals 3 x 2!, and so on with 0! defined as 1.
 *	In general, if n is greater than zero, n! = n * (n-1)!.  Test
 *	your function in a program that uses a loop to allow the user to
 *	enter various values for which the program reports the factorial.
 *
 *  Created on: Apr 23, 2016
 *      Author: Larry Maddox
 */

#include <iostream>

unsigned long long factorial ( int );


unsigned long long factorial(int x)
{
	if (x == 0)
		return 1; // 0! = 1, by definition

	return x * factorial(x - 1);
}

int main()
{
	int n;

	std::cout << "Enter an integer: ";
	while ((std::cin >> n).good())
	{
		std::cin.get(); // clear input stream of newline
		if (n < 0)
		{
			std::cout << "Enter a non-negative integer: ";
			continue;
		}
		std::cout << n << "! = " << factorial(n);
		std::cout << "\nEnter another integer (q to quit): ";
	}
}


