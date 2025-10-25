/*Program that helps understand string display
Author: Amy Webb
Date: 25-02-2025
*/

#include <stdio.h>

int main()
{
    //displays abcd
    printf("%5s", "abcd");

    //displays abcdef
    printf("%5s", "abcdef");

    //displays abc
    printf("%-5s", "abc");

    //displays ab
    printf("%5.2s", "abcde");

    //displays ab
    printf("%-5.2s", "abcde");

    return 0;

}