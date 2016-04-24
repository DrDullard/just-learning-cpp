/* Exercise 6: Write a program that has main() call a user-define function that
 * takes a distance in light years as an argument and then returns the distance
 * in astronomical units.  The program should request the light year value as
 * input from the user and display the result, as shown:
 *
 * Enter the number of light years: 4.2
 * 4.2 light years = 265608 astronomical units.
 *
 * Note: 1 light year = 63,240 astronomical units.
 */

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double ly_to_au( double );

int main() {

	double lyr, astu;

	cout << "Enter the number of light years: ";
	cin >> lyr;

	astu = ly_to_au(lyr);

	cout << lyr << " light years = " << round(astu)
	     << " astronomical units.\n";
}

double ly_to_au( double ly )
{
	double au;

	au = 63240. * ly;

	return au;
}

