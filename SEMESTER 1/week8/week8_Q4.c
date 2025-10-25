/*Program that will allow users to input 4 numbers and display them and thenswitch them aroung
Author: Amy Webb
Date: 5-11-2024*/


#include <stdio.h>

#define VALUES 4

int main()
{
    int array [VALUES];
    int i;
    int temp = 0;
    int pond =0;

    printf("\n\nPlease enter numbers\n", VALUES);

    //this loop will be used to enter values into the array
    for( i = 0; i < VALUES; i++)
    {
        scanf("%d", &array[i]);

    }

    // this will print the starting values
    for(i = 0; i < VALUES; i++)
    {
            printf("\nStarting values are %d",array[i]);
    }//end for

   
    // switches values around  
    temp = array[0];
    pond = array [1];

    array[0] = pond;
    array[1] = temp;

    temp = array[2];
    pond = array[3];

    array[2] = pond;
    array[3] = temp;


    //prints out new values 
    for(i = 0; i < VALUES; i++)
        {
            printf("\nNewest values are %d",array[i]);
        }

    
    
    



    return 0;
}