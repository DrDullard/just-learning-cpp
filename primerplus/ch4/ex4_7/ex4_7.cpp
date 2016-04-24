/*
 * ex4_7.cpp
 *
 * Exercise 7: William Wingate runs a pizza-analysis service.  For each
 * pizza, he needs the following information:
 * 	*	The name of the pizza company, which can consist of more than
 * 		one word
 * 	*	The diameter of the pizza
 * 	*	The weight of the pizza
 *
 * Devise a structure that can hold this information and write a program
 * that uses a structure variable of that type.  The program should ask
 * the user to enter each of the preceding items of information, and
 * then the program should displau that information.  Use cin (or its
 * methods) and cout.
 *
 *  Created on: Apr 3, 2016
 *      Author: lamadd0x
 */

#import <iostream>

struct Pizza
{
	char maker[20];
	int diameter;
	float weight;
};

int main()
{
	Pizza pie;

	std::cout << "Who makes the pizza? ";
	std::cin.getline(pie.maker, sizeof(pie.maker));

	std::cout << "How big is the pizza (the diameter in inches)? ";
	std::cin >> pie.diameter;

	std::cout << "What does the pizza weigh? ";
	std::cin >> pie.weight;

	std::cout << "Maker: " << pie.maker << std::endl;
	std::cout << "Diameter: " << pie.diameter << std::endl;
	std::cout << "Weight: " << pie.weight << std::endl;

	return 0;

}

