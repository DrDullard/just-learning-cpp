#include <iostream> 
int main() 
{
	int x = 316;
	int y = 86;
	int z = x/y;

	z = z * y;

	std::cout << z << std::endl;
	std::cout << (x/y)*y + (x & y) << " " << std::endl;
	return 0;
}

