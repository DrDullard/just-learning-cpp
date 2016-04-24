/* Exercise 4: Write a program that asks the user to enter his or her age. The
 * program the should display the age in months:
 *
 * Enter your age: 29
 * 
 * Your age in months is 384.
 */

#include <iostream>

using std::cout;
using std::cin;

int year_to_month( int );

int main()
{
	int year;
	int month;

	cout << "Ener your age: ";
	cin >> year;

	month = year_to_month(year);

	cout << "Your age in months is " << month << ".\n";
}

int year_to_month( int yr )
{
	int mth;

	mth = 12 * yr;

	return mth;
}
	
