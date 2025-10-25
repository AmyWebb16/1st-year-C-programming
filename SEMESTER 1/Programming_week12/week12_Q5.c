/*to write a program that uses pointer notation to have two floating-point arrays with three elements that copies elments of first array 
into second and display contents
Author: Amy Webb
Date: 03-12-2024*/


#include <stdio.h>

#define SIZE 3


int main()
{
    float arr1 [SIZE];
    float arr2 [SIZE];
    int i;


    printf("Please enter numbers \n", SIZE);


    //Enter values into the array using pointer notation
    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", & *(arr1 + i));
    }//end for


    //puts contents of array 1 into array 2
    for(i = 0; i < SIZE; i++)
    {
        *(arr2 + i) = *(arr1 + i);
    }//end for


    //displays contents of array 1
    for(i = 0; i < SIZE; i++)
    {
        printf("Array 1 contents are %.2f\n", *(arr1 + i));
    }//end for


    //displays contents of array 2
    for(i = 0; i < SIZE; i++)
    {
        printf("Array 2 contents are %.2f\n", *(arr2 + i));
    }//end for

    return 0;
    
}//end main