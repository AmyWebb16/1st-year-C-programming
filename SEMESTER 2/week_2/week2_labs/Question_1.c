/*program that prints 10 (*) in one line
Author: Amy Webb
Date: 4-02-2025
*/

#include <stdio.h>

//#define SIZE 10
// Function signature or Function prototype
void stars(void);

int main()
{

printf("Before function call\n\n");

// Execute our function stars()
stars();

printf("\n\nAfter function call");

return 0;
} // end main()


// Function stars() used to display a set of asterix
//
void stars(void)
{

 printf("**********");

} // end stars()