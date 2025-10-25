/* Program that uses a function that multiplies the array by two 
   and modifies it in place.
   Author: Amy Webb
   Date: 18-02-2025
*/

#include <stdio.h>

#define SIZE 5

// Function signature
void multi(int array[], int size);

int main()
{
    int my_array[SIZE];
    int i;

    // Ask user to enter numbers and put them into an array
    printf("Please enter %d numbers:\n", SIZE);

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &my_array[i]);

    }//end for

    // Call the function to modify the array
    multi(my_array, SIZE);

    // Display the modified array
    printf("The contents of the new array are:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", my_array[i]);

    }//end for

    return 0;

}//end main()

// Function to multiply array elements by 2
void multi(int array[], int size)
{
    int i;

    //modifiy the array by two
    for (i = 0; i < size; i++)
    {
        array[i] *= 2;

    }//end for

}//end multi()
