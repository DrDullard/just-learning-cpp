/*
 * ex4_4.cpp
 *
 * Exercise 4: Write a program that asks the user to enter his or her
 *	first name, and then then constructs, stores, and displays a third
 *	string, consisting of the user's last name, followed by a comma, a
 *	space, and first name.  Use string objects and methods from the
 *	string header file.  A sample run should look like this:
 *
 *	Enter your first name: Flip
 *	Enter your last name: Fleming
 *	Here's the information in a single string: Fleming, Flip
 *
 *  Created on: Apr 2, 2016
 *      Author: lamadd0x
 */

#import <iostream>
#import <string>

int main()
{
	std::string first;
	std::string last;

	std::cout << "Enter your first name: ";
	std::getline(std::cin, first);

	std::cout << "Enter your last name: ";
	std::getline(std::cin, last);

	std::string flname;
	flname = last + ", " + first;

	std::cout << "Here's the information in a single string: "
			  << flname << std::endl;

	return 0;

}



