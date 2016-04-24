/*
 * ex4_10.cpp
 *
 * Exercise 10: Write a program that requests the user to enter three
 * times for the 40-yd dash (or 40-meter, if you prefer) and then
 * displays the times and the average.  Use an array object to hold
 * the data. (Use a built-in array if array is not available).
 *  Created on: Apr 4, 2016
 *      Author: lamadd0x
 */

#import <iostream>
#import <array>

int main()
{
	std::array<float, 4> dash;

	std::cout << "Enter results of 40-yd dash: \n";
	std::cout << "  First: ";
	std::cin >> dash[0];
	std::cout << "  Second: ";
	std::cin >> dash[1];
	std::cout << "  Third: ";
	std::cin >> dash[2];

	dash[3] = (dash[0] + dash[1] + dash[2])/3.0;

	std::cout << "The average time is " << dash[3] << ".\n";

	return 0;

}


