/*Program to use DMA to allocate memory to 5 floating-point numbers calculate and display the average of the numbers
Author:Amy Webb
Date:9-12-2024
*/

#include <stdio.h>
#include <stdlib.h>

#define ARRAY 5

int main()
{
    float *ptr;
    float numbers = 0;
    float total = 0;
    float average = 0;
    int no_bytes = 0;
    int i;


    //Part !
    //How many numbers do you wish to enter
    printf("\nHow many numbers will you enter?\n");
    scanf("%f", &numbers);


    //Part 2
    //Calculate the number of bytes required to store the set of numbers in memory
    no_bytes = numbers * sizeof(float);


    //Part 3
    //Allocate the block of memory required
    ptr = malloc(no_bytes);


    //part 4
    //Check if malloc was successful check if memory was allocated successfully
    if(ptr == NULL)
    {
        printf("\nFailed to allocate memory\n");
        
        return 0;

    }//end if


    else //memory allocated succesfully
    {

        //Part 5
        //memory allocted sucessfully - go and use it
        printf("\nMemory allocated sucessfully\n");
        printf("\nEnter the set of %.0f numbers\n", numbers);


        //Enter data items into the allocated memory block
        for(i = 0; i < numbers; i++)
        {
            scanf("%f", & *(ptr + i));

        }//end for

        //Add all the numbers together
        for(i = 0; i < numbers; i++)
        {
            total = total + *(ptr + i);
        }//end for

        //find the average
        for(i = 0; i < numbers; i++)
        {
            average = total/numbers;
        }//end for

        printf("\nThe average of the numbers is %.2f\n", average);

        //Part 6
        free(ptr);

    }//end else

    return 0;

}//end main()