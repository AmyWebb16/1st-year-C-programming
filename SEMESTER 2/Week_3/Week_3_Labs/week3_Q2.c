/*Program that calculates average of 3 numbers with a function and return answer to main
Author: Amy Webb
Date: 11-02-2025
*/

#include <stdio.h>

#define SIZE 3

//Function signature
float ave(float[]);

int main()
{
    float numbers [SIZE];
    int i;
    float average;

    printf("Enter %d numbers\n", SIZE);

    //Enter data into the array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", & numbers[i]);

    }//end for

    //Calculate the average of the contents of the array
    average = ave(numbers);

    //Display the average
    printf("The average of the numbers is %.2f", average);

    return 0;

}//end main()


float ave(float my_array[])
{
    float total = 0;
    int i;
    float average = 0;

    //Add numbers together
    for(i = 0; i < SIZE; i++)
    {
        total = total + my_array[i];

    }//end for

    //Find the average of the numbers
    average = total/SIZE;

    return average;

}//end ave()