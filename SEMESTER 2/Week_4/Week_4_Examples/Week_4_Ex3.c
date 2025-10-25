/*
    gets() or now become fgets()
*/

#include <stdio.h>

#define SIZE 210

int main()
{
    char name[SIZE];
    
    
    printf("Enter your name\n");
    
    scanf("%s", name); // no ampersand needed in the scanf() for strings name = &name[0]
    //gets(name);
    
    // this is the alternative for the gets() function because it is now
    // become deprecated, i.e., some compilers will not support gets()
    
    // fgets(name, SIZE, stdin);
    
    
    printf("Hello ");
    
    puts(name); // automatically moves cursor to a new line after the string
 
    return 0;
    
} // end main()