/*
 * ex7_7.cpp
 *
 *  Redo Listing 7.7, modifying the three array-handling functions to
 *  each use two pointer parameters to represent a range.  The fill_array()
 *  function, instead of returning the actual number of items read,
 *  should return a pointer to the location after the location filled;
 *  the other functions can use this pointer as the second argument
 *  to identify the end of the data.
 *
 *  Created on: Apr 23, 2016
 *      Author: lamadd0x
 */

// Original listing filename was arrfun3.cpp

#include <iostream>

const int Max = 5;

/* -- Function Prototypes -- */
double* fill_array( double* ar, int limit );
void show_array( double* begin, double*  end );
void revalue( double r, double* begin, double* end );

int main()
{
	double properties[Max];

	double* size = fill_array(properties, Max);

	show_array(properties, size);

	if (size != properties)
	{
		std::cout << "Enter revaluation factor: ";

		double factor;

		while(!(std::cin >> factor))
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Bad Input; please enter a number: ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}

	std::cout << "Done.\n";
	std::cin.get();
	std::cin.get();

	return 0;
}

double* fill_array(double* ar, int limit)
{
	double temp;
	int i;

	for (i = 0; i < limit; i++)
	{
		std::cout << "Enter value #" << (i + 1) << ": ";
		std::cin >> temp;
		if (!std::cin)
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;

		ar[i] = temp;
	}

	return ar + i;
}

void show_array(double* begin, double* end)
{
	double* pt;
	int i = 1;

	for (pt = begin; pt != end; pt++)
	{
		std::cout << "Property #" << i++ << ": $";
		std::cout << *pt << std::endl;
	}
}

void revalue(double r, double* begin, double* end)
{
	double* pt;
	for(pt = begin; pt != end; pt++)
		*pt *= r;
}