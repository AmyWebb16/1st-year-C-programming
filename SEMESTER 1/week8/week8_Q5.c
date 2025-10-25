/*program to enter five characters and display them
Author: Amy Webb
Date: 5-11-2024
*/


#include <stdio.h>

#define LETTERS 5

int main()
{
    char array [LETTERS];
    int i;


    printf("Enter characters please\n");

    for(i = 0; i < LETTERS; i++)
    {
        printf("Character %d:", i + 1);
        scanf(" %c", &array);
    }

    printf("\nThe contents of the array are\n");

    for(i = 0; i < 5; i++)
    {
        printf("Character %d: %c\n", i + 1, array[LETTERS]);
    }



    return 0;
}