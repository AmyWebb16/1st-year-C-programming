/*Program to use 2-D array that enters values, display values,
finds smallest and largest, calulate average
Author: Amy Webb
Date: 12-11-2024*/

#include <stdio.h>

#define ROWS 3
#define COLS 2

int main()
{
    int arr1[ROWS][COLS];
    int i;
    int j;
    int sum_total = 0;
    float average = 0;

    // Ask the user to enter data
    for (i = 0; i < ROWS; i++)
    {
        printf("This is the rows\n");
        for (j = 0; j < COLS; j++)
        {
            printf("Enter the value for array [ %d][ %d]", i, j);
            scanf(" %d", &arr1[i][j]);
        }
    }

    printf("\n*************DATA ENTRY COMPLETED******************\n");

    int smallest = arr1[0][0];
    int largest = arr1[0][0];

    // find the smallest and largest - intially
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (arr1[i][j] > largest)
            {
                largest = arr1[i][j];
            }

            if (arr1[i][j] < smallest)
            {
                smallest = arr1[i][j];
            }

            // add all values in the 2D array as loop goes
            sum_total = sum_total + arr1[i][j];
            average = sum_total / 6;
        }
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
    printf("Average: %.2f\n", average);

    return 0;
}
