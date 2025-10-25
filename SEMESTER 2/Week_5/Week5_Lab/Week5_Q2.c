/*A program that reads in the name and displays a space in bewteen each letter
Author: Amy Webb
Date: 25-02-2025
*/

#include <stdio.h>

#define SIZE 20

int main()
{
    char name[SIZE];
    int i;
    
    //Enter characters into the string
    printf("Enter your name please\n");
    fgets(name, sizeof(name),stdin);

    //Displays name with a space in bewteen
    for(i = 0; i < sizeof(name); i++)
    { 
        //stops when NULL character is read
       if(name[i] == '\0')
       {
            return 0;
       }

       //Displays the name
       printf("%c ", name[i]);

    }

    
}
