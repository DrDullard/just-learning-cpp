/*
 * ex6_3.cpp
 *
 *  Exercise 3: Write precursor to a menu-driven program.  The program
 *  should display a menu offering four choices, each labeled with a
 *  letter. If the user responds with a letter other than one of the
 *  four valid choices, the program should prompt the user to
 *  enter a valid response until the user complies. Then the program
 *  should use a switch to select a simple action based on the user's
 *  selection. A program run should look something like this:
 *
 *  Please enter one of the following choices:
 *  c) carnivore			p) pianist
 *  t) tree					g) game
 *  f
 *  Please enter a c, p, t, or g: q
 *  Please enter a c, p, t, or g: t
 *  A maple is a tree.
 *
 *  Created on: Apr 11, 2016
 *      Author: Larry Maddox
 */

#include <iostream>

int main()
{
	char ch;

	std::cout << "Please enter one of the following choices:\n"
			  << "c) carnivore \t\t\t p) pianist\n"
			  << "t) tree\t\t\t\t g) game\n";

	while (std::cin >> ch)
	{
		switch(ch)
		{
			case 'c':
			case 'C':
			case 'p':
			case 'P':
			case 't':
			case 'T':
			case 'g':
			case 'G': break;
			default: std::cout << "Please enter a c, p, t, or g: ";
				 continue;
		}
		break;

	}

	switch(ch)
	{
		case 'c':
		case 'C': std::cout << "A lion is a carnivore.\n";
				  break;
		case 'p':
		case 'P': std::cout << "Liberace was a classical pianist.\n";
				  break;
		case 't':
		case 'T': std::cout << "A maple is a tree.\n";
				  break;
		default:  std::cout << "Would you like to play a game?\n";
				  break;
	}

	return 0;
}


