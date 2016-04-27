/*
 * ex8_2.cpp
 *
 *	The CandyBar structure three members. The first member holds the
 *	brand name of a candy bar. The second member holds the weight
 *	(which may have a fractional part) of the candy bar, and the third
 *	member holds the number of calories (an integer value) in the
 *	candy bar. Write a program that uses a function that takes as
 *	arguments a reference to CandyBar, a pointer-to-char, a double,
 *	and an int and uses the last three values to set the corresponding
 *	members of the structure. The last three arguments should have the
 *	default values of "Millennium Munch," 2.85, and 350. Also the
 *	program should use a function that takes a reference to a CandyBar
 *	as an argument and displays the contents of the structure. Use
 *	const where appropriate.
 *
 *  Created on: Apr 26, 2016
 *      Author: Larry Maddox
 */

#include <iostream>

const int ArSize = 30;

struct CandyBar
{
	char brand[ArSize];
	double weight;
	int calories;
};

/* -- Function Prototypes -- */
void fill_bar( CandyBar &, const char * ch = "Millennium Munch",
			double wt = 2.85, int cal = 350 );
void show_bar( const CandyBar & );

int main()
{
	char ch[ArSize] = "Snickers";
	double weight = 3.12;
	int cals = 428;

	CandyBar bar;

	fill_bar(bar);
	show_bar(bar);
	fill_bar(bar, ch, weight, cals);
	show_bar(bar);

	return 0;
}

void fill_bar(CandyBar &cb, const char * ch, double wt, int cal)
{
	strcpy(cb.brand, ch);
	cb.weight = wt;
	cb.calories = cal;

	return;
}

void show_bar(const CandyBar & cb)
{
	std::cout << "Brand: " << cb.brand;
	std::cout << "\nWeight: " << cb.weight;
	std::cout << "\nCalories: " << cb.calories << std::endl;
	return;
}


