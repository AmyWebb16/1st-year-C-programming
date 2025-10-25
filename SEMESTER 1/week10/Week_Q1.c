/*intialise two 3by4 arrays and then multiple the corresponding elements and put them in a third array
Author: Amy Webb
Date:19-11-2024*/

#include <stdio.h>

#define ROWS 3
#define COLS 4

int main()
{
    int arr1[ROWS][COLS] = { 1, 5, 6,
                             8, 9, 2,
                             3, 5, 1,
                             9, 7, 2
                            };

    int arr2[ROWS][COLS] = { 7,8,9,
                             2,4,5,
                             1,6,3,
                             4,5,9
                            };

    int arr3[ROWS][COLS];
    int i;
    int j;
    

    //multiple the elements of array 1 and 2 together and put in array3
    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            arr3[i][j]= arr1[i][j]*arr2[i][j];
        }
    }


    //display the data stored
    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            printf("array3[%d][%d]: %d\n", i,j,arr3[i][j]);
        }
    }


    return 0;
}
