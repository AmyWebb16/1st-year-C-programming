/* A Program that uses separate functions to a) compare the string hello world to entered string b) determine if substring is occurs in string
 and how many times.
Author: Amy Webb
Date: 11-03-2025
*/

#include <stdio.h>
#include <string.h>

#define SIZE 100

//Function signatures
void Compare_world(char[]);
void Check_sub(char[]);

int main()
{
    char word1[SIZE];

    //Ask user to enter string
    printf("Please enter a sentence\n");
    fgets(word1, SIZE, stdin);

    // Remove newline character if present
    word1[strcspn(word1, "\n")] = '\0';

    Compare_world(word1);
    Check_sub(word1);

}//end main()


void Compare_world(char word1[])
{
    char hello[] = "Hello World";

    //Compare strings
    int result =strcmp(word1,hello);

    if (result == 0)
    {
        printf("Strings are the same.\n");

    }//end if

    else
    {
        printf("Different strings.\n");

    }//end else

}//end Compare_world()

void Check_sub(char word1[])
{
    char word2[SIZE] ="is";
    int counter = 0;
    int i = 0;
    int j = 0;
    char *result;
    

    //check if substring is in the string
    result = strstr(word1, word2);
    if(result !=0)
    {
        printf("The substring occurs\n");

    }//end if

    else
    {
        printf("It does not occur\n");
    }

    //check if substring is in the string multiple times
    for(i = 0; SIZE > i; i++)
    {
        if(word1[i] == word2[j])
        {   i++;
            j++;
        

        if(word1[i] == word2[j])
        {
            counter = counter +1;
            j--;
        }
        }

    }

    //Display the number of time is occurs in the string
    printf("the substring is in the sentence %d times\n", counter);
    
}