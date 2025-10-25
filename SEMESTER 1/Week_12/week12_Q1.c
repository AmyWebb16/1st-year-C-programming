/*Program that displays the lines of a text file along with linw numbers
Author: Amy Webb
Date; 29-04-2025
*/

#include <stdio.h>

#define SIZE 50

int main()
{
    //Create a file pointer
    FILE *file;
    char line[SIZE];
    int line_num = 1;

    
    if( (file = fopen("Week12_Q1.txt", "r") ) == NULL)
    {
        printf("\nError opening file");

    }
    
    while(fgets(line, sizeof(line), file))
    {
        printf("%d.%s", line_num++, line);
    }

    fclose(file);

    return 0;

}//end main()