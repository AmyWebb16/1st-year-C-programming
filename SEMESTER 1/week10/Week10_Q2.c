/*program so that it computes the sum of all the  elements in the array
Author: Amy Webb
Date: 19-11-2024
*/

#include <stdio.h>

#define ROWS 4
#define COLS 6

int main()
{
    int data[4][6] = {{3,2,5,7,4,2},
                      {1,4,4,8,13,1},
                      {9,1,0,2,0,0},
                      {0,2,6,3,-1,-8}};
    int i;
    int j;
    int total_sum=0;

    // Calculate total sum
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            total_sum = total_sum + data[i][j];
        }
    }

    // Display the sum
    printf("the total is %d", total_sum);

    return 0;
}