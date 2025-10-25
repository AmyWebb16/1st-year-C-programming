/*Write a program tha uses a funciton to check if a number is odd or even return 1 if even andd 0 if odd
Author: Amy Webb
Date: 11-02-2025
*/

#include <stdio.h>

//Function signature
int check(int);

int main()
{
    int num = 0;
    int sort = 0;

    //Ask user for number and enter into num
    printf("Please enter a number\n");
    scanf("%d", &num);

    //Display if number is even or odd
    sort = check(num);

    printf("%d", sort);

    return 0;

}//end main()


int check(int num)
{
    int n1 = 1;
    int n0 = 0;

    if( num%2 == 0)
    {
        return n1;

    }//end if

    return n0;

}//end check()