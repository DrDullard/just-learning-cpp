/*
 * ex5_7.cpp
 *
 * 	Exercise 7: Design a structure called car that holds the following
 * 	information about an automobile: its make, as a string in a
 * 	character array or in a string object, and the year it was built,
 * 	as an integer. Write a program that asks the user how many cars to
 * 	catalog.  The program should then use new to create a dynamic array
 * 	of that many car structures.  Next, it should prompt the user to
 * 	input the make (which might consist of more than one word) and year
 * 	information for each structure. Note that this requires some care
 * 	because it alternates reading strings with numeric data (see Chapter
 * 	4). Finally, it should display the contents of each structure. A
 * 	sample run should look something like the following:
 *
 * 	How many cars do you wish to catalog? 2
 * 	Car #1:
 * 	Please enter the make: Hudson Hornet
 * 	Please enter the year made: 1952
 * 	Car #2:
 * 	Please enter the make: Kaiser
 * 	Please enter the year made: 1951
 * 	Here is your collection:
 * 	1952 Hudson Hornet
 * 	1951 Kaiser
 *
 *  Created on: Apr 8, 2016
 *      Author: Larry Maddox
 */

#include <iostream>
#include <string>

struct car
{
	std::string make;
	short year;
};

int main()
{
	int num;

	std::cout << "How many cars do you wish to catalog? ";
	(std::cin >> num).get();

	car** garage = new car*[num];

	for (int i = 0; i < num ; i++)
	{
		garage[i] = new car;
		std::cout << "Car #" << i + 1 << ":\n";
		std::cout << "Please enter the make: ";
		std::getline(std::cin, garage[i]->make);
		std::cout << "Please enter the year made: ";
		std::cin >> garage[i]->year;
		std::cin.get();
	}

	std::cout << "Here is your collection:\n";

	for (int i = 0; i < num; i++)
		std::cout << garage[i]->year << " "
				  << garage[i]->make << std::endl;

	for (int i = 0; i< num; i++)
		delete (garage[i]);

	delete [] (garage);

	return 0;

}


