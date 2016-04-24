/* Exercise 3: Write a program that asks the user to enter the latitude in
 * degrees, minutes, and seconds and that then displays the latitude in decimal
 * format.  There are 60 seconds of arc in a minute and 60 minutes of arc in 
 * a degree; represent these values with symbolic constants. You should a 
 * separate variable for each input vallue.  A sample run should look like this:
 *
 * Enter a latitude in degrees, minutes, and seconds:
 * First, enter the degrees: 37
 * Next, enter the minutes of arc: 51
 * Finally, enter the seconds of arc: 19
 * 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
 */

#include <iostream>

int main()
{

	const float d2m = 60.;
	const float m2s = 60.;

	float d, m, s;

	std::cout << "Enter a latitude in degrees, minutes and seconds:\n";
	std::cout << "First, enter the degrees: ";
	std::cin >> d;
	std::cout << "Next, enter the minutes of arc: ";
	std::cin >> m;
	std::cout << "Finally, enter the soconds of arc: ";
	std::cin >> s;

	float deg;
	deg = d + m / d2m + s /(d2m * m2s);

	std::cout << int(d) << " degrees, " << int(m)  << " minutes, "
		  << int(s) << " seconds = " << deg << " degrees" << std::endl;

	return 0;
}

