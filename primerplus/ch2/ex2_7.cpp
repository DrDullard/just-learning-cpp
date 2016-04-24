/* Exercise 7: Write a program that asks the user to enter an hour and minute
 * value. The main() function should then pass these two values to a type void
 * function that displays the two values in the format as shown:
 *
 * Enter the number of hours: 9
 * Enter the number of minutes: 28
 * Time: 9:28
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void show_time(int, int);

int main()
{
	int hour;
	int minute;

	cout << "Enter the number of hours: ";
	cin  >> hour;
	cout << "Enter the number of minutes: ";
	cin  >> minute;

	show_time(hour,minute);

	return 0;
}

void show_time (int hr, int min)
{
	cout << "Time: " << hr << ":" << min << endl;
}

