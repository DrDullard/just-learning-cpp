/*
 * ch4_2.cpp
 *
 * Exercise 2: Rewrite listing 4.4 (instr2.cpp), using the string class
 * instead of char arrays.
 *
 *  Created on: Apr 2, 2016
 *      Author: lamadd0x
 */

#include <iostream>
#include <string>

int main()
{

	std::string name;
	std::string dessert;


	std::cout << "Enter your name:\n";
	std::getline(std::cin,name);
	std::cout << "Enter your favorite dessert:\n";
	std::getline(std::cin,dessert);
	std::cout << "I have some delicious " << dessert;
	std::cout << " for you, " << name << ".\n";
	return 0;

}



