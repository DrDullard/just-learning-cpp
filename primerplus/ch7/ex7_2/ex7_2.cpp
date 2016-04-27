/*
 * ex7_2.cpp
 *
 *	Write a program that asks the user to enter up to 10 golf scores,
 *	which are to be stored in an array. You should provide a means for
 *	the user to terminate input prior to entering 10 scores. The program
 *	should display all the scores on one line and report the average
 *	score.  Handle input, display, and the average calculation with
 *	three separate array-processing functions.
 *
 *  Created on: Apr 21, 2016
 *      Author: Larry Maddox
 */

#include <iostream>

/* --Function Prototypes-- */
int fill_scores(int arr[], const int max_size);
void show_scores(const int arr[], const int size);
float avg(const int scores[], const int size);

int main()
{
	const int ArSize = 10;
	int scores[ArSize] = {};

	std::cout << "Enter 10 scores (or less, enter a non-number to quit)\n";

	int sz = fill_scores(scores, ArSize);

	std::cout << "Thank You!\n";

	show_scores(scores, sz);

	return 0;
}

void show_scores(const int arr[], const int size)
{
	for(int i = 0; i < size; i++)
		std::cout << arr[i] << ", ";

	std::cout << "Average: " << avg(arr ,size) << std::endl;

}

int fill_scores(int arr[], const int max_size)
{
	int i = 0;

	std::cout << "Score #1: ";

	while ((i < max_size) && (std::cin >> arr[i]))
		if (++i < max_size)
			std::cout << "Score #" << i+1 << ": ";

	return i;
}

float avg(const int arr[], const int size)
{
	float sum = 0;

	for (int i = 0; i < size; i++)
		sum += arr[i];

	return sum / size;
}
