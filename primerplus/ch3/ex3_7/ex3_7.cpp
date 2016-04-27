/*
 * ex3_7.cpp
 *
 * Exercise 7: Write a program that asks you to enter an automobile
 * gasoline consumption figure in the European style (liters per 100km)
 * and converts to the US style of miles per gallon.  Note that in
 * addition to using different units, of measurement, the US approach
 * (distance/fuel) is the inverse of the European approach (fuel/distance)
 * Note that 100 km is 62.14 miles, and 1 gallon is 3.875 liters.
 *
 *  Created on: Mar 27, 2016
 *      Author: Larry Maddox
 */

#import <iostream>

int main()
{
	float lp100;

	std::cout << "Enter fuel consumption as L/100km: ";
	std::cin >> lp100;

	const float k2m = 62.14;
	const float g2l = 3.875;

	float mpg;

	mpg = g2l/lp100;
	mpg = k2m* mpg;

	std::cout << lp100 << " L/100 km = " << mpg << " miles per gallon\n";

	return 0;

}



