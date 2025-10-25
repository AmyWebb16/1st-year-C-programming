/*Find the larges number of three numbers
Author: Amy Webb
Date: 11-02-2025
*/

#include <stdio.h>

#define SIZE 3

//Function signature
int large(int nums[]);

int main()
{
    int nums[SIZE];
    int i;
    int largest = 0;

    //Ask users for numbers and enter into a array
    printf("Please enter %d numbers\n", SIZE);

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &nums[i]);

    }//end for

    //call function
    largest = large(nums);

    printf("The largest of the %d numbers %d\n", SIZE , largest);

    return 0;

}//end main()


int large(int my_array[])
{
    int largest = my_array[0];
    int i;

    for(i = 0; i < SIZE; i++)
    {
        if(largest < my_array[i])
        {
            largest = my_array[i];

        }//end if

    }//end for

    return largest;

}//end high()