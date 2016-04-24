/*
 * ch4_3.cpp
 *
 *	Exercise 3: Write a program that asks the user to enter his or her
 *	first name, and then then constructs, stores, and displays a third
 *	string, consisting of the user's last name, followed by a comma, a
 *	space, and first name.  Use char arrays and functions from the cstring
 *	header file.  A sample run should look like this:
 *
 *	Enter your first name: Flip
 *	Enter your last name: Fleming
 *	Here's the information in a single string: Fleming, Flip
 *
 *  Created on: Apr 2, 2016
 *      Author: lamadd0x
 */

#import <iostream>
#import <cstring>

int main()
{
	const int Size = 20;
	char first[Size];
	char last[Size];

	std::cout << "Enter your first name: ";
	std::cin.getline(first,Size);

	std::cout <<"Enter your last name: ";
	std::cin.getline(last,Size);

	char flname[2*Size];

	std::strcpy(flname, last);
    std::strcat(flname, ", ");
	std::strcat(flname, first);


	std::cout << "Here's the information in a single string: "
			  << flname << std::endl;

	return 0;
}


