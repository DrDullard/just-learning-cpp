/* Exercise 5: Write a program that has main() call a user-defined function
 * takes a Celsius temperature value as an argument adn then returns the
 * equivalent Fahrenheit value.  The program should request the Celsius value
 * as input from the user and display the result as shown:
 *
 * Please enter a Celsius Value: 20
 * 20 degrees Cesius is 68 degrees Fahrenheit.
 *
 * For reference, here is the formula for making the conversion:
 * F = 9/5 * C + 32
 */

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int celsius_to_fahren( int );

int main()
{
	int c;
	int f;

	cout << "Please enter a Celsius value: ";
	cin >> c;

	f = celsius_to_fahren(c);

	cout << c << " degrees Celsius is " << f << " degrees Fahrenheit.\n";
}

int celsius_to_fahren( int t_c )
{
	float t_f;

	t_f = 1.8 * float(t_c) + 32.0;

	return round(t_f);
}
