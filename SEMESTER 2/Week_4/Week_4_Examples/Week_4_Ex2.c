/*
    puts()
*/

#include <stdio.h>

#define SIZE 21

int main()
{
    char name[SIZE];
    
    
    printf("Enter your name\n");
    scanf("%s", name); // no ampersand needed in the scanf() for strings| name = &name[0]
    
    printf("\n\nHello ");
    puts(name); // automatically moves cursor to a new line after the string
    
    return 0;
    
} // end main()
