/*Program that ask user for 5 numbers and pass them to a function that checks if the numbers are odd or even and
 calculate the total number of even numbers.
Author: Amy Webb
Date: 18-02-2025
*/

#include <stdio.h>

#define SIZE 5

//function signature
int check_num(int[]);

int main()
{
    int values[SIZE];
    int i;
    int total = 0;

    //Ask users for numbers
    printf("Please Enter %d numbers\n", SIZE);

    //Enter numbers into the array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &values[i]);

    }//end for

    //Call check number even or odd and return the total value of even numbers
    total = check_num(values);

    //Displays the total of even numbers
    printf("The total of the even numbers is %d\n" , total);

    return 0;

}//end main()


int check_num(int my_array[])
{
    int i = 0;
    int total = 0;
    

    //Checks if number is even or odd
    for(i = 0; i < SIZE; i++)
    {
        if(my_array[i]%2 == 0)
        {
            printf("The number %d is even\n", my_array[i] );

            //Keeps a running total of the even numbers
            total = total + my_array[i];

        }//end if

        else
        {
            printf("The number %d is odd\n", my_array[i]);

        }//end else

    }//end for

    //returns the total value
    return total;

}//end check_num()


