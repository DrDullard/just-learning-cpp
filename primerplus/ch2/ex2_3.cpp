/* Exercise 3: Write a program contained three functions (counting main()) that
 *             produces the following output:
 *             Three blind mice
 *             Three blind mice
 *             See how they run
 *             See how they run
 */

#include <iostream>

void mice();
void seerun();

using std::cout;

int main()
{

	mice();
	mice();
	seerun();
	seerun();
}

void mice()
{
	cout << "Three blind mice\n";
}

void seerun()
{
	cout << "See how they run\n";
}

