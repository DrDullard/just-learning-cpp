/*
 * ex6_8.cpp
 *
 *	Write a program that opens a text file, reads it character-by-
 *	character to the end of the file, and reports the number of
 *	characters in the file.  (Similar to wc -c).
 *
 *  Created on: Apr 15, 2016
 *      Author: Larry Maddox
 */

#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::cout << "Enter a file name: ";

	std::ifstream fin;
	std::string fname;

	std::getline(std::cin, fname);
	fin.open(fname);

	int chars = 0;

	while (fin.get() != EOF)
		chars++;

	fin.close();
	std::cout << fname << " contains " << chars << " characters.\n";

	return 0;

}


