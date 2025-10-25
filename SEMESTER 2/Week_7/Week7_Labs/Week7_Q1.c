/*Program that enter a string and uses separte functions to:
a) count the number of times a vowel occurs.
b)count the number of characters in string and reverse it.
c)concatenate strin to new string char senctence[40] "I entered the string"
Author: Amy Webb
Date: 11-03-2025
*/

#include <stdio.h>
#include <string.h>

#define SIZE 50

//Function signatures
void vowel_count(char[]);
void reverse(char[]);
void concatenate(char[]);

int main()
{
    char str1[SIZE];

    //Ask user to enter string
    printf("Please enter a string\n");
    fgets(str1, SIZE, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    vowel_count(str1);
    reverse(str1);

}//end main()


void vowel_count(char str1[])
{
    int count = 0;
    int i;
    int len = strlen(str1);

    for(i = 0; i < len ; i++)
    {
        if(str1[i] == 'a'|| 'o'||'u'||'i'||'e')
        {
            count++;

        }//end if

       if(str1[i] == 'o')
        {
            count++;
        }

        if(str1[i] == 'u')
        {
            count++;
        }

        if(str1[i] == 'e')
        {
            count++;
        }

        if(str1[i] == 'i')
        {
            count++;
        }

    }//end for

    //Display the number of vowels
    printf("The string has %d vowels in it", count);

}//end vowel_count()

void reverse(char str1[])
{
    int len = strlen(str1);
    int i = strlen(str1);
    int j = 0;
    char str2 [SIZE];

    for(j = 0; j < SIZE; j++ )
    {
        for(i = len; i > len ; i--)
        {
            str2[j] = str1[i];
        }
    }

    printf("%s", str2);


}