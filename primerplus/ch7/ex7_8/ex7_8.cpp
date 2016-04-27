/*
 * ex7_8.cpp
 *
 *	Redo Listing 7.15 without using the array class. Do two versions:
 *
 *	(a) Use an ordinary array of const char * for the strings
 *		representing the season names, and use an ordinary array of
 *		double for the expenses.
 *
 *  (b) Use an ordinary array of const char * for the strings
 *  	representing the season names, and use a structure whose
 *  	sole member is an ordinary array of double for the expenses.
 *  	(This design is similar to the basic design of the array class.)
 *
 *  Created on: Apr 23, 2016
 *      Author: Larry Maddox
 */

// Original was meant to have filename arrobj.cpp

#include <iostream>
//#include <array>
//#include <string>

/* -- Constants -- */
const int Seasons = 4;
//const std::array<std::string, Seasons> Snames =
const char* Snames[4] =
	{"Spring", "Summer", "Fall", "Winter"};

/* -- Function Prototypes -- */
//void fill(std::array<double, Seasons> * pa);
//void show(std::array<double, Seasons> da);
void fill( double * pa );
void show( const double da[], const int size );

int main()
{
//	std::array<double, Seasons> expenses;
	double expenses[Seasons];

	fill(expenses);
	show(expenses, Seasons);

	return 0;
}

//void fill(std::array<double, Seasons> * pa)
void fill(double* pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << "Enter " << Snames[i] << " expenses: ";
		std::cin >> pa[i];
	}
}

//void show(std::array<double, Seasons> da)
void show(const double da[], const int size)
{
	double total = 0.0;

	std::cout << "\nEXPENSES\n";
	for (int i = 0; i < size; i++)
	{
		std::cout <<  Snames[i] << ": $" << da[i] << std::endl;
		total += da[i];
	}
	std::cout << "Total Expenses: $" << total << std::endl;
}
