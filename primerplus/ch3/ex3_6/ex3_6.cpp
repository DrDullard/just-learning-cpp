/*
 * ex3_6.cpp
 *
 * Exercise 6: Write a program that asks how many miles you have driven
 * and how many gallons of gasoline you have used and then reports the
 * miles per gallon your car has gotten.
 *
 *  Created on: Mar 27, 2016
 *      Author: Larry Maddox
 */

#import <iostream>

int main()
{
	int mls;
	float gas;

	std::cout << "How many miles have you driven? ";
	std::cin >> mls;
	std::cout << "How much gas has been consumed? ";
	std::cin >> gas;

	float mpg;
	mpg = float(mls)/gas;

	std::cout << "Your car gets " << mpg << " miles per gallon\n";

	return 0;

}


