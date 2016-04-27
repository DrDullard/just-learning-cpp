/*
 * ex6_1.cpp
 *
 *  Exercise 1: Write a program that reads keyboard input to the @
 *  symbol and that echos the input except for digits, converting
 *  each uppercase character to lowercase, and vice versa.
 *
 *  Created on: Apr 11, 2016
 *      Author: Larry Maddox
 */

#include <iostream>
#include <cctype>

int main()
{
	char ch;

	std::cout << "Please enter a line of text: ";

	while ( std::cin.get(ch) )
	{
		if (ch == '@')
			break;
		else if (isdigit(ch))
			continue;
		else if (isupper(ch))
			std::cout << char(tolower(ch));
		else if (islower(ch))
			std::cout << char(toupper(ch));
		else
			std::cout << ch;
	}
	std::cout << "\nDone!\n";

	return 0;
}


