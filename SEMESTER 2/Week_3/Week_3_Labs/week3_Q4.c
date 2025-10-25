/*A program that that pass by value and increments the variable by 2 print before function is called in the function and 
after the function is called
Author: Amy Webb
Date: 11-02-2025
*/

#include <stdio.h>

//Function signature
void pass_val(int);

int main()
{
    int num = 1;

    //Display contents of num before the function is called
    printf("The contents of num before the function is called is %d\n", num);

    //Call the function
    pass_val(num);

    //display contents of num after the function is called
    printf("The contents of num after the function is called is %d\n", num);

    return 0;

}//end main()


void pass_val(int n1)
{
    //increment num by 2
    n1 = n1 + 2;

    //Display the contents of num when the function is called
    printf("The contents of num when the function is called is %d\n", n1);

}//end pass_val()