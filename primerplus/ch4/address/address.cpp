/*
 * address.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: Larry Maddox
 */

#import <iostream>

int main()
{
	int donuts = 6;
	double cups = 4.5;

	std::cout << "donuts value = " << donuts;
	std::cout << " and donuts address = " << &donuts << std::endl;

	std::cout << "cups value  = " << cups;
	std::cout << " and cups address = " << &cups << std::endl;

	return 0;

}


