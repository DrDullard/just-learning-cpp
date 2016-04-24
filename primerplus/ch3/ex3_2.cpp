/* Exercise 2: Write a short program that asks for your height in feet and
 * inches and your weight in pounds.  (Use three variables to store the
 * information.) Have the program report your BMI.  To calculate BMI, first
 * convert your height in feet and inches to your height in inches.  Then
 * your height in inches to your height in meters (1 inch = 0.0254 m). Then
 * convert your weight in pounds into your mass in kilograms (1 kg = 2.2 lb).
 * Finally compute the BMI by dividing your mass in kilograms by the square of
 * your height in meters. Use symbolic contants to represent carious conversion
 * factors.
 */

#include <iostream>

int main()
{
	const float ft2in = 12.;
	const float in2m = 0.0254;
	const float kg2lb = 2.2;

	float ht_ft,ht_in,wt;

	std::cout << "Please enter your height in feet and inches:\n";
	std::cin >> ht_ft;
	std::cin >> ht_in;

	std::cout << "Please enter your weight in pounds:\n";
	std::cin >> wt;

	float inches,meters;

	inches = ht_ft * ft2in + ht_in;
	meters = inches * in2m;

	float kg;
	kg = wt / kg2lb;

	float bmi;

	bmi = kg / (meters * meters);

	std::cout << "Your body mass index (BMI) is " << bmi << ".\n";

	return 0;
}

