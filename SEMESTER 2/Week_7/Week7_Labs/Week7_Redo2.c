#include <stdio.h>
#include <string.h>

#define SIZE 50



int main()
{
    char str1[SIZE];
    char *ptr;
    int counter = 0;
    

    printf("Please enter a string\n");
    fgets(str1, SIZE ,stdin);
    str1[strlen(str1) - 1] = '\0';
    
    

    //check for  substring "is"
    while( (ptr = strstr(ptr, "is"))  != NULL)
    {
        counter++;

        ptr++;
    }   

    printf("\n The word \"is\" %d times.", counter);
    
    return 0;
}



