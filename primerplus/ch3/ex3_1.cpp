/* Write a short program that asks for you height in integer inches and then 
 * converts your height to feet an inches.  Have the program use the underscore
 * character to indicate where to type the reposonse.  Also use a constant to
 * represent the conversion factor.
 */

#include <iostream>


int main()
{
	int height_in;
	int ft;
	int inch;
	const int inch_to_feet = 12;

	std::cout << "Please enter your height in inches: ___\b\b\b";
	std::cin >> height_in;

	ft = height_in / inch_to_feet;
	inch = height_in % inch_to_feet;

	std::cout << "Your height is " << ft << " feet " << inch
		  << " inches.\n";

	return 0;
}

