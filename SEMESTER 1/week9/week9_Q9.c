/*A program to input values in a 4 by 5 array and find values
less than 0 and display them with their indices
Author:Amy Webb
Date: 15-11-2024*/


#include <stdio.h>

#define ROWS 4
#define COLS 5

int main()
{
    int arr1[ROWS][COLS];
    int i;
    int j;


    //Ask user for data and put it in array
    for(i = 0; i < ROWS; i++)
    {
    for(j = 0; j < COLS; j++)
    {
        printf("Enter the value for array [ %d][ %d]", i,j);
        scanf(" %d", &arr1[i][j]);
    }
    }



    for (i = 0; i < ROWS; i++) 
    {        
        for (j = 0; j < 5; j++)
        {
            if (arr1[i][j] < 0) 
            {
                printf("Value: %d at Index [%d][%d]\n", arr1[i][j], i, j);
            }
        }
    }

    return 0;

}