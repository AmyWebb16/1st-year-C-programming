/*Program that uses a function to find the highest number in a array that uer enters and displays it in main()
Author: Amy Webb
Date: 18-02-2025
*/

#include <stdio.h>

#define SIZE 5

//Function signature
int highest(int[]);

int main()
{
    int my_array [SIZE];
    int i;
    int big = 0;

    //Ask user to enter numbers and put them into an array
    printf("Please enter %d numbers\n", SIZE);

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &my_array[i]);

    }//end for

    //Call the funciton to find highest
    big = highest(my_array);

    //Display the highest value
    printf("The highest number out of the %d numbers is %d\n", SIZE, big);

    return 0;

}//end main()

int highest(int array[])
{
    int i;
    int highest = array[0];

    //Use loop to go through array and find the highest number in the array
    for(i = 0; i < SIZE; i++)
    {
        if(highest < array[i])
        {
            highest = array[i];

        }//end if

    }//end for

    return highest;

}//end highest()