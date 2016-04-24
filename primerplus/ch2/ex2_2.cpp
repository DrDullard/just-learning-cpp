/* Exercise 2: Write a program that asks for a distance if furlongs and converts
 *             it into yards. */

#include<iostream>

int main()
{
	using std::cout;
	using std::cin;

	int furlong;
	int yard;

	cout << "Enter a number of furlongs:\n";
	cin  >> furlong;

	yard = 220 * furlong;

	cout << "There are " << yard << " yards in " << furlong 
             << " furlongs.\n";
}
