/*Program that allows user to input two words and see if they are the same. a) add the first word to the end of a sentence. b) calculate length of string in part a
Author: Amy Webb
Date: 4-03-2025
*/

#include <stdio.h>
#include <string.h>

#define SIZE 20

void compare_strings(char word1[], char word2[]);
void join_strings(char word1[]);
void count_string(char sent[]);

int main()
{
    char word1[SIZE];
    char word2[SIZE];

    // Ask user for first word
    printf("Please enter the first word:\n");
    fgets(word1, SIZE, stdin);

    // Remove newline character if present
    word1[strcspn(word1, "\n")] = '\0';

    // Ask user for second word
    printf("Please enter the second word:\n");
    fgets(word2, SIZE, stdin);

    // Remove newline character if present
    word2[strcspn(word2, "\n")] = '\0';

    compare_strings(word1, word2);
    join_strings(word1);

    return 0;
}

void compare_strings(char word1[], char word2[])
{
    int result = strcmp(word1, word2); // Compare both strings

    if (result == 0)
    {
        printf("Strings are the same.\n");
    }
    else
    {
        printf("Different strings.\n");
    }
}

void join_strings(char word1[])
{
    char sent[SIZE + 30] = "First word entered is "; // Buffer large enough

    strcat(sent, word1); // Concatenate word1 to sent

    printf("%s\n", sent); // Display concatenated string

    count_string(sent);
}

void count_string(char sent[])
{
    int length = strlen(sent); // Get string length

    printf("The number of characters used is %d\n", length);
}
