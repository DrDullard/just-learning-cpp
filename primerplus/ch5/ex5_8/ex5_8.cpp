/*
 * ex5_8.cpp
 *
 *	Exercise 8: Write a program that uses an array of char and a loop
 *	to read one word at a time until the work done is entered. The
 *	program should then report the number of words entered (not counting)
 *	done). A sample run should look like this:
 *
 *	Enter words (to stop, type the word done):
 *	anteater birthday category dumpster
 *	envy finagle geometry done for sure
 *	You entered a total of 7 words.
 *
 *  Created on: Apr 8, 2016
 *      Author: lamadd0x
 */

#include <iostream>

int main()
{
	char fin[15] = "done";
	char wd[15];

	int i = 0;

	std::cout << "Enter words (to stop, type the word done):\n";
	do
	{
		(std::cin >> wd).get();
		i++;
	}
	while (strcmp(fin,wd));

	std::cout << "You entered a total of " << i - 1 << " words.\n";

	return 0;

}


