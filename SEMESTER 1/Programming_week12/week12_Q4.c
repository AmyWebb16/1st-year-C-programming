/*prgram that asks for 2 integer values.Store the values only using pointers and find their sum. Display the value stored in sum
Author: Amy Webb
Date: 9-12-2024
*/

#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    int *ptr1;
    int *ptr2;
    int *ptr3;


    //make the pointer point at the variables
    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &sum;

    //enter a the first number
    printf("\nEnter the first number\n");
    scanf("%d", ptr1);

    //enter the second number
    printf("\nEnter the second number\n");
    scanf("%d", ptr2);

    //find the sum of the numbers
    *ptr3 = *ptr1 + *ptr2;
    printf("the sum of the numbers are %d", *ptr3);


    return 0;
    
}//end main