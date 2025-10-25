/*Program that checks the highest of three numbers and return it back to main
Author: Amy Webb
Date: 11-02-2025
*/

#include <stdio.h>

#define SIZE 3

//Function signature
int high(int nums[]);

int main()
{
    int nums[SIZE];
    int i;
    int highest = 0;

    //Ask users for numbers and enter into a array
    printf("Please enter %d numbers\n", SIZE);

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &nums[i]);

    }//end for

    //call function
    highest = high(nums);

    printf("The highest of the %d numbers %d\n", SIZE , highest);

    return 0;

}//end main()


int high(int my_array[])
{
    int highest = my_array[0];
    int i;

    for(i = 0; i < SIZE; i++)
    {
        if(highest < my_array[i])
        {
            highest = my_array[i];

        }//end if

    }//end for

    return highest;

}//end high()