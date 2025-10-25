/*Program that allows user to enter two words and see if their the same of different.
Author: Amy Webb
Date: 4-03-2025
*/

#include <stdio.h>
#include <string.h>

#define SIZE 20

int main()
{
    char word1[SIZE];
    char word2[SIZE];
    int result = 0;

    //ask user for first word and enter into array
    printf("Please enter first word\n");
    scanf("%s", word1);

    //ask user for second word and enter into array
    printf("Please enter second word\n");
    scanf("%s", word2);

    //Compare both strings and check if their the same
    result = strcmp(word1, word2);

    //Check if the strings are the same
    if(result == 0)
    {
        printf("Strings are the same\n");

    }//end if

    else
    {
        printf("Different strings\n");

    }//end else

    return 0;
}
