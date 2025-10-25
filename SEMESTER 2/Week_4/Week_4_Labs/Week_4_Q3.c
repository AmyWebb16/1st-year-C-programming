/*Program that uses a function to calculate average of 5 numbers in an array and display in main()
Author: Amy Webb
Date: 18-02-2025
*/

#include <stdio.h>

#define SIZE 5

//Function signature
float ave(float []);

int main()
{
    int i;
    float my_array[SIZE];
    float average = 0;

    //Ask user for 5 numbers and enter them into an array
    printf("Please enter %d numbers\n", SIZE);

    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", &my_array[i]);

    }//end for

    //Call the function ave to find average of the numbers
    average = ave(my_array);

    //Display the average of the numbers
    printf("The average of the %d numbers is %.2f\n", SIZE, average);

    return 0;

}//end main()

float ave(float array[])
{
    float total = 0;
    int i;
    float average = 0;

    for(i = 0; i < SIZE; i++)
    {
        total = total + array[i];
    }

    //Find the average
    average = total / SIZE;
    
    //return average
    return average;

}//end ave()