/*Program to read fifteen numbers a display on separte line,
 one line separted by a space, on line with space and backwards
 Author: Amy Webb
 Date: 12-11-2024
*/


#include <stdio.h>

#define ARRAY 15

int main()
{
    int numbers [ARRAY];
    int i = 15;


    printf("\n Please Enter Numbers\n", ARRAY);


    //this loop will enter numbers into the array
    for( i = 0; i < ARRAY; i++)
    {
        scanf(" %d", &numbers[i]);
    }


    //this will print numbers on separte line
    for( i = 0; i < ARRAY; i++)
    {
        printf(" %d\n", numbers[i]);
    }


    //this will print them on the same line but with a space
    for ( i = 0; i < ARRAY; i++)
    {
        printf("%d  ", numbers [i]);
    }


    //this will reverse the order of the numbers
    for( i = ARRAY - 1; i > -1; i--)
    {   
        printf("%d  ", numbers[i]);
    }

    return 0;
}