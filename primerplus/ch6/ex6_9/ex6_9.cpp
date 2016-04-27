/*
 * ex6_9.cpp
 *
 *  Do Programming Exercise 6 but modify it to get information from a
 *  file.  the first tiem in the file should be the number of
 *  contributors, and the rest of the lines should consist of pairs of
 *  lines, with the first line of each pair being a contributors name
 *  and the second being a contribution.
 *
 *  Created on: Apr 15, 2016
 *      Author: Larry Maddox
 */
#include <iostream>
#include <string>
#include <fstream>

const int ArSize = 20;

struct Patron
{
	char name[ArSize];
	double contribution;
};

int main()
{
	std::cout << "Please the file name for the contributor information: ";

	std::ifstream fin;
	std::string fname;

	(std::cin >> fname).get();

	fin.open(fname);

	int numContr;

	(fin >> numContr).get();

	Patron* donor = new Patron[numContr];

	for (int i = 0; i < numContr; i++)
	{
		fin.getline(donor[i].name, ArSize);
		(fin >> donor[i].contribution).get();
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

	fin.close();
	delete [] donor;

	return 0;
}



