/*program that uses function with 2 parameters to display a certain character x amout of times
Author: Amy Webb
Date: 4-02-2025
*/

#include <stdio.h>

//function signature
void show(char,int);

int main()
{
   int no_chars = 0;
   char my_char = ' ';

    //ask user for character
   printf("what character would you like to dislay?\n");
   scanf("%c", & my_char);

    //ask user the amount of times to print
    printf("How many times would you like yo display it?\n");
    scanf("%d", & no_chars);

    //call function
    show(my_char,no_chars);

    return 0;

}//end main

//execute the function show()
//
void show(char ch, int num)
{
    int i;

    //to display the character x amount of times
    for(i = 0; i < num; i++)
    {
        printf("%c", ch);

    }//end for

}//end show