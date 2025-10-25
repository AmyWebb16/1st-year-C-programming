/*
Returning a value from a function - finding the minimum of two values in a function
*/

#include <stdio.h>

//#define SIZE 5

// Function signature
int find_minimum(int, int);



int main()
{
   int num1, num2;
   int min = 0;


   printf("Enter any two whole numbers\n");
   scanf("%d", & num1);
   scanf("%d", & num2);

    
   // Find the minimum of the two numbers
   min = find_minimum(num1, num2);

    
   printf("\nThe minimum of %d and %d is %d", num1, num2, min);

  return 0;

} // end main()



//Find the minimum value of two whole numbers
int find_minimum(int n1, int n2)
{
    int minimum = 0;

    
    // if n1 is less than n2
    if(n1 < n2)
    {
       minimum = n1;
    } // end if
    else
    {
       minimum = n2;
    } // end else
    
    // return the data value in minimum
    return minimum;
    
} // end find_minimum()