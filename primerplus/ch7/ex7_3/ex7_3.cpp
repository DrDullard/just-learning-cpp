/*
 * ex7_3.cpp
 *
 *  a) Write a function that passes a box structure by value and that displays the
 *     value of each member.
 *  b) Write a function that passes the address of a box structure and that sets
 *     the volume member to the product of the other three dimensions.
 *  c) Write a simple program that uses these functions.
 *
 *  Created on: Apr 23, 2016
 *      Author: lamadd0x
 */


#include <iostream>

/* -- global struct -- */
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

/* -- Function Prototypes -- */
void show_struct( const box );
void calc_vol ( box* );



int main()
{
    box shoe;

    strcpy(shoe.maker, "ACME");
    shoe.height = 4.7;
    shoe.width = 9.4;
    shoe.length = 16.3;

    calc_vol(&shoe);
    show_struct(shoe);

    return 0;
}

void show_struct(const box sb)
{
    std::cout << "Maker: " << sb.maker;
    std::cout << "\nheight: " << sb.height;
    std::cout << "\nwidth: " << sb.width;
    std::cout << "\nlength: " << sb.length;
    std::cout << "\nvolume: " << sb.volume << std::endl;
}

void calc_vol(box* sb)
{
    sb->volume = sb->height * sb->width * sb->length;
}


