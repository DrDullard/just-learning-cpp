/*
 * ex4_9.cpp
 *
 * Exercise 9: Do programming Exercise 6, but instead of declaring an
 * array of three CandyBar structures, use the new allocate the array
 * dynamically.
 *
 *  Created on: Apr 3, 2016
 *      Author: Larry Maddox
 */

#import <iostream>
#import <string>

struct CandyBar
{
	std::string maker;
	float weight;
	int calories;
};

int main()
{
	CandyBar** snack = new CandyBar*[3];

		snack[0] = new CandyBar;

		snack[0]->maker = "Mocha Munch";
		snack[0]->weight = 2.3;
		snack[0]->calories = 350;

		snack[1] = new CandyBar;

		snack[1]->maker = "Almond Joy";
		snack[1]->weight = 2.1;
		snack[1]->calories = 275;

		snack[2] = new CandyBar;

		snack[2]->maker = "Snickers";
		snack[2]->weight = 3.2;
		snack[2]->calories = 400;

		std::cout << "1. maker: " << snack[0]->maker << "; Weight: " << snack[0]->weight
				<< "; Calories: " << snack[0]->calories << std::endl;
		std::cout << "2. maker: " << snack[1]->maker << "; Weight: " << snack[1]->weight
				<< "; Calories: " << snack[1]->calories << std::endl;
		std::cout << "3. maker: " << snack[2]->maker << "; Weight: " << snack[2]->weight
				<< "; Calories: " << snack[2]->calories << std::endl;

		delete snack[0];
		delete snack[1];
		delete snack[2];
		delete [] snack;

		return 0;
}

