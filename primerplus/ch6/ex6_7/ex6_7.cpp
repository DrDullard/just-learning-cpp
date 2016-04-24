/*
 * ex6_7.cpp
 *
 *	Write a program that reads input a word at a time until a lone q
 *	is entered. The program should then report the number of words that
 *	began with vowels, the number that begin with consonants, and the
 *	number that fit neither of those categories. One approach is to
 *	use isalpha() discriminate between words beginning with letters and
 *	those that don't and then use an if or switch to further identify
 *	those passing the isalpha() test that begin with vowels. A sample
 *	run might look like this:
 *
 *	Enter words (q to quit):
 *	The 12 awesome oxen ambled
 *	quietly across 15 meters of lawn. q
 *	5 words begin with vowels
 *	4 words begin with consonants
 *	2 others
 *
 *  Created on: Apr 14, 2016
 *      Author: lamadd0x
 */

#include <iostream>
#include <cctype>

int main()
{
	std::cout << "Enter words (q to quit):\n";

	char word[10];
	int vowel = 0;
	int consonant = 0;
	int other = 0;

	std::cin >> word;
	while (strcmp(word,"q"))
	{
		if (isalpha(word[0]))
		{
			switch(word[0])
			{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U': vowel++;
					  break;
			case '\n': break;
			default: consonant++;
			}
		}
		else
			other++;

		std::cin >> word;
	}

	std::cout << vowel << " words begin with vowels\n"
			  << consonant << " words begin with consonants\n"
			  << other << " other\n";

	return 0;

}


