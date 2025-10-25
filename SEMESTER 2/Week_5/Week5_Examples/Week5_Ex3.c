/*
String functions

Appending/Joining one string to the end of another string - strcat()
*/

#include <stdio.h>
#include <string.h>


int main()
{
    char str1[17] = "first and ";
    char str2[] = "second";
    
    
    printf("\n%s", str1);
    printf("\n%s", str2);
    
    // Concatenate / Join the contents of str1 to str2
    strcat(str1, str2);
    
    // Display the newly concatenated string
    printf("\n%s", str1);
    
    return 0;
    
} // end main()