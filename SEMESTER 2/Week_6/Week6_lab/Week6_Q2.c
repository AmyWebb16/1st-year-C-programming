/*Program that read a sentence and uses separte functions to a) calculate the number of characters in the sentence and 
  b) append the sentence with a starting pharse.
Author: Amy Webb
Date: 4-03-2025
*/

#include <stdio.h>
#include <string.h>

#define SIZE 200

int main()
{
    char sentence[SIZE];
    char addon[] = "My sentence is :";
    int length = 0;

    //Ask user to enter a sentence
    printf("Please enter your sentence\n");
    fgets(sentence, SIZE, stdin);

    //a)
    //Calculate the number of characters in the sentence
    length = strlen(sentence);
    printf("The number of characters in the sentence is %d\n", length);

    //b)
    //append sentence to begin with addon
    strcat(addon, sentence);
    printf("%s\n", addon);

    return 0;
}