/*Program to use DMA to allocate memory to 5 floating-point numbers calculate and display the average of the numbers
Author:Amy Webb
Date:9-12-2024
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    float *ptr1;
    float *ptr2;
    int data_set = 5;
    float total = 0;
    //float average = 0;
    //int no_bytes = 0;
    int i;


    //Part 1
    //Data set already known, i.e, 5 floating-point numbers
    

    //Part 2
    //Not needed, we are using calloc()
    //no_bytes = data_set * sizeof(float); [if using malloc()]
    

    //Part 3 - allocate the memory
    ptr1 = calloc(data_set, sizeof(float));
    //ptr = malloc(no_bytes);
    

    //Part 4
    //Check if calloc() was successful check if memory was allocated successfully
    if(ptr1 == NULL)
    {
        printf("\nFailed to allocate memory\n");
        
        return 0;

    }//end if()


    else 
    {

        //Part 5
        //Memory allocted sucessfully - go and use it
        printf("\nMemory allocated sucessfully\n");

        printf("\nEnter the numbers\n");


        //Enter data items into the allocated memory block
        for(i = 0; i < data_set; i++)
        {
            scanf("%f", & *(ptr1 + i));

        }//end for()


        //Add all the numbers together
        for(i = 0; i < data_set; i++)
        {
            total = total + *(ptr1 + i);

        }//end for()


        //Find the average
        //Firstly, allocate the block of memory needed for the average
        ptr2 = malloc(sizeof(float));


        //Check if memory allocate successfully
        if(ptr2 == NULL)
        {
            printf("\nFailed to allocate memory\n");
        
            return 0;

        }//end if

        else
        {
            //store the average inside the memory block
            *(ptr2) = total/data_set;

        }//end else
        
        printf("\n\nThe %d numbers and average are:\n", data_set);

        for(i = 0; i < data_set; i++)
        {
            printf("%.1f\n",  *(ptr1 + i));

        }//end for()

        printf("\nAverage: %.1f\n", *(ptr2) );


    }//end else

    //Part 6
    //free the memory block
    free(ptr1);
    free(ptr2);

    return 0;

}//end main()