/*
 * ex6_6.cpp
 *
 *	Put together a program that keeps track of monetary contributions
 *	to the Society for the Preservation of Rightful Influence. It should
 *	ask the user to enter the number of contributors and then solicit
 *	the user to enter the name and contribution of each contributor.
 *	The information should be stored a dynamically allocated array
 *	of structures.  Each structure should have two members: a
 *	character array (or else a string object) to store the name and
 *	a double member to hold the amount of the contribution. After
 *	reading all the data, the program should display the names and
 *	amounts donated for all donors who contributed $10,000 or more.
 *	This list should be headed by the label 'Grand Patrons'. After
 *	that, the program should list the remaining donors. That list
 *	should be headed 'Patrons'. If there are no donors in one of the
 *	categories, the program should print the word "none". Aside from
 *	displaying the two categories, the program need do no sorting.
 *
 *  Created on: Apr 14, 2016
 *      Author: Larry Maddox
 */

#include <iostream>

const int ArSize = 20;

struct Patron
{
	char name[ArSize];
	double contribution;
};

int main()
{
	int numContr;

	std::cout << "Please enter the number of contributers: ";

	(std::cin >> numContr).get();

	Patron* donor = new Patron[numContr];

	for (int i = 0; i < numContr; i++)
	{
		std::cout << "Donor #" << i + 1 << std::endl;
		std::cout << "Name: ";
		std::cin.getline(donor[i].name, ArSize);
		std::cout << "Contribution: ";
		(std::cin >> donor[i].contribution).get();
	}

	std::cout << "\n\nGrand Patrons\n";

	for (int i = 0; i < numContr; i++)
		if (donor[i].contribution >= 10000)
			std::cout << donor[i].name << ", $"
					  << donor[i].contribution << std::endl;

	std::cout << "\nPatrons\n";

	for (int i = 0; i < numContr; i++)
		if(donor[i].contribution < 10000)
			std::cout << donor[i].name << ", $"
			  	  	  << donor[i].contribution << std::endl;


	delete [] donor;

	return 0;

}


