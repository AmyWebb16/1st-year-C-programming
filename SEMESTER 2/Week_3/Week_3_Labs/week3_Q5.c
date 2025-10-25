/*A program that that pass by refernece and increments the variable by 2 print before function is called in the function and
 after the function is called
Author: Amy Webb
Date: 11-02-2025
*/

#include <stdio.h>

//Function signature
void pass_ref(int *);


int main()
{
    int num = 1;

    //Display num before function is called
    printf("The contents of num before function is called is %d\n", num);

    //Pass the address of num to the function
    pass_ref(&num);

    //Display num after function is called
    printf("The contents of num after the function is called is %d\n", num);

    return 0;

}//end main


void pass_ref(int *n1)
{
    //increment n1 by 2
    *n1 = *n1 + 2;

    //Display num when function is called
    printf("The contents of num when function is called is %d\n", n1);

}//end pass_ref()