/*a program that uses a function to find the highest and lowest of three numbers
Author: Amy Webb
Date: 4-02-2025
*/

#include <stdio.h>

//#define NUMBERS 3

//function to sort numbers
void sort(int,int,int);

int main()
{
    int num1, num2, num3;

    //entering in our numbers
    printf("Enter in 3 numbers\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    //calling our function
    sort(num1,num2,num3);

    return 0;

}//end main

//function to find highest and lowest
//
void sort(int num1, int num2, int num3)
{
    int highest = num1;
    int lowest = num1;

    if(num2 > highest)
    {
        highest = num2;
    }//end if

    if(num3 > highest)
    {
        highest = num3;
    }//end if

    if(num2 < lowest)
    {
        lowest = num2;
    }//end if


    if(num3 < lowest)
    {
        lowest = num3;

    }//end if

    printf("The highest value is %d\n", highest);
    printf("The lowest lowest is %d\n", lowest);

}//end show()