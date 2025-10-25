/*Write a Program to check whether a number is prime or not.
Author: Amy Webb
Date: 11-02-2025
*/

#include <stdio.h>


int main()
{
    int number = 0;


    //Allow user to enter value
    printf("Please enter a number\n");
    scanf("%d" , &number);

    if(number <= 1)
    {
        printf("NOT PRIME");
        return 0;

    }//end if

    if(number%number == 0)
    {
        printf("PRIME");
        return 0;

    }//end else if

    else
    {
        printf("NOT PRIME");
        return 0;
    }//end else

    return 0;
}


