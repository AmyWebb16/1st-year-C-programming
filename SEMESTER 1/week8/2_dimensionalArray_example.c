/*
Program to show to intiialise an array
Author: Amy Webb
Date: 05-11-2024*/


#include <stdio.h>

#define NO_OF_MONTHS 12

int main()
{
    int days[NO_OF_MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month = 0;
    int i;


    //display the contents of the array
    for(i = 0; i < NO_OF_MONTHS; i++)
    {
        printf("%d", days[i]);
    }

    printf("\n\nPlease enter a month, e.g, 1 = Jan, 2 = Feb, etc., \n");

    //useer enters a number corresponding to the month thet wish to view the no. of days
    do
    {
       scanf("%d", &month);

       //check if valid month entered, i.e., 1 -12 inclusive
       if (month < 1 || month > 12)
       {
            printf("\n Invalid month entered.\n");
       }//end if
    } while (month < 1 || month > 12);


    //I have used days[month-1] because the array starts at element 0 and not
    //Element 1 for the 1st element of the array

    printf("\n\nThe number of days in month %d are %d", month, days[month - 1]);
    return 0;
    
}