/*
 * ex6_4.cpp
 *
 *  When you join the Benevolent Order of Programmers, you can be
 *  known at BOP meetings by your real name, by your job title, or
 *  by your secret BOP name. Write a program that can list members
 *  by real name, by job title, by secret name, or by a member's
 *  preference.
 *
 *  In the program, create a small array of such structures and
 *  initialize it to suitable values. Have the program run a loop that
 *  lets the user select from different alternatives:
 *
 *  a. display by name			b. display by title
 *  c. display by bopname		d. display by preference
 *  q. quit
 *
 *  Note that "display by preference" does not mean display the
 *  preference member; it means display the member corresponding to
 *  the preference number.  For instance, if preference is 1, choice
 *  d would display the programmers job title. A sample run may look
 *  something like the following:
 *
 *  Benevolent Order of Programmers Report
 *  a. display by name			b. display by title
 *  c. display by bopname		d. display by preference
 *  q. quit
 *  Enter your choice: a
 *  Wimp Macho
 *  Raki Rhodes
 *  Celia Laiter
 *  Hoppy Hipman
 *  Pat Hand
 *  Next Choice: d
 *  Wimp Macho
 *  Junior Programmer
 *  MIPS
 *  Analyst Trainee
 *  LOOPY
 *  Next Choice: q
 *  Bye!
 *
 *
 *  Created on: Apr 12, 2016
 *      Author: lamadd0x
 */

#import <iostream>

const int StrSize = 25;

struct bop
{
	char fullname[StrSize];
	char title[StrSize];
	char bopname[StrSize];
	int preference;
};

int main()
{
	bop members[5] =
	{
		{"Wimp Macho","Software Engineer","Code Monkey",1},
		{"Raki Rhodes","Junior Programmer","n00b",2},
		{"Celia Laiter","Senior Developer","MIPS",3},
		{"Hoppy Hipman","Analyst Trainee","RAM",2},
		{"Pat Hand","Intern","LOOPY",3}
	};

	std::cout << "Benevolent Order of Programmers Report\n"
			  << "a. display by name\t\tb. display by title\n"
			  << "c. display by bopname\td. display by preference\n"
			  << "q. quit\n"
			  << "Enter your choice: ";

	char ch;

	while(std::cin >> ch)
	{
		switch(ch)
		{
		case 'a':
		case 'A':
			for (int i = 0; i < 5; i++)
				std::cout << members[i].fullname << std::endl;
			break;
		case 'b':
		case 'B':
			for (int i = 0; i < 5; i++)
				std::cout << members[i].title << std::endl;
			break;
		case 'c':
		case 'C':
			for (int i = 0; i < 5; i++)
				std::cout << members[i].bopname << std::endl;
			break;
		case 'd':
		case 'D':
			for (int i = 0; i < 5; i++)
				if (members[i].preference == 1)
					std::cout << members[i].fullname << std::endl;
				else if (members[i].preference == 2)
					std::cout << members[i].title << std::endl;
				else
					std::cout << members[i].bopname << std::endl;
			break;
		case 'q':
		case 'Q':
			std::cout << "Bye!\n";
			return 0;
		default:
			std::cout << "Please enter a, b, c, d, or q: ";
			continue;
		}
		std::cout << "Next Choice: ";
	}
}
