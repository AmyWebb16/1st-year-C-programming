/*
    Assigning pointers to strings and displays them
*/

#include <stdio.h>

int main()
{
    // ptr contains the address of the 1st character in the string, 'H'
    char *ptr = "Hello";

    // (i) printf("%s", ptr);
    // (ii) display the string character by character
    // while the contents of the address pointed by ptr is NOT
    // the NULL character

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        
        // Must increment the address in prt to point at the next
        // address, i.e., the next character in the string
        ptr++;

    } // end while
    return 0;
    
} // end main