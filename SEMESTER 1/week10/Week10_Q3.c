/*program that uses 3x2 array that enter the values of each element. Calculate the display of sum of rows and column.
Find the highest number in the array
Author:Amy Webb
Date:9-12-2024
*/

#include <stdio.h>

#define ROWS 3
#define COLS 2

int main()
{
    int arr1 [ROWS][COLS];
    int i;
    int j;
    int highest = 0;
    int row0 = 0;
    int row1 = 0;
    int row2 = 0;
    int col0 = 0;
    int col1 = 0;


    //a) Ask user for data and put it in array
    for(i = 0; i < ROWS; i++)
    {

    for(j = 0; j < COLS; j++)
    {
        printf("Enter the value for array [ %d][ %d]", i,j);
        scanf(" %d", &arr1[i][j]);
    }//end for

    }//end for


    //b) Find the sum of the rows
    for(j = 0; j < COLS; j++)
    {
        row0 = row0 + arr1[0][j];
        row1 = row1 + arr1[1][j];
        row2 = row2 + arr1[2][j];

    }//end for


    //c) Find the sum of the columns
    for(i = 0; i < ROWS; i++)
    {
        col0 = col0 + arr1[i][0];
        col1 = col1 + arr1[i][1];

    }//end for

    
   //d) Find the highest number
   for(i = 0; i < ROWS; i++)
    {

    for(j = 0; j < COLS; j++)
    {
        if(arr1[i][j] > highest)
        {
            highest = arr1[i][j];

        }//end if

    }//end for

    }//end for


    printf("\nthe value of row 1 is %d\n", row0);
    printf("\nthe value of row 2 is %d\n", row1);
    printf("\nthe value of row 3 is %d\n", row2);
    
    printf("\nthe value of column 1 is %d\n", col0);
    printf("\nthe value of the column 2 is %d\n", col1);

    printf("\nthe highest number is %d\n", highest);

    return 0;

}//end main