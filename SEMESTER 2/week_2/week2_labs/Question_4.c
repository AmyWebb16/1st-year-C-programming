/*A program that uses 2 functions and ask user to enter 3 numbers and find the sum and average of the numbers
Author: Amy Webb
Date: 4-2-2025
*/

#include <stdio.h>
#define NUMBERS 3

//function sum()
void sum(float,float,float);

//function average
void average(float);

int main()
{
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;
    int i;

    //entering in our 3 numbers
    printf("Please enter your Numbers\n");
    scanf("%f", & num1);
    scanf("%f", & num2);
    scanf("%f", & num3);
    
    //call function sum
    sum(num1,num2,num3);

    return 0;
    
}//end main

//function sum to find total of numbers
//
void sum(float num1, float num2, float num3)
{
    int i = 0;
    float sum = 0;

    sum = num1 + num2 + num3;

    printf("the total is %.2f\n", sum);

    //call function average
    average(sum);

}//end sum

//function average finds the average of the numbers
//
void average(float sum)
{
    float average = 0;

    average = sum / 3;

    printf("the average of the number is %.2f\n", average);

}//end average