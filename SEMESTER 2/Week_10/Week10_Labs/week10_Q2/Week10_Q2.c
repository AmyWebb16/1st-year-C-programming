/*Write a C program to remove any blank lines from a text file. Test the program with a
file with: a. no blank lines, one blank line, multiple blank lines
Author: Amy Webb
Date: 01-04-2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

int main()
{
    FILE *fp_in, *fp_out;
    char line[SIZE];
    
    // Open the file for reading
    if ((fp_in = fopen("wk10_Q2.txt", "r")) == NULL)
    {
        printf("\nError opening file");
        return 1;
    }
    
    // Open a temporary file for writing
    if ((fp_out = fopen("output.txt", "w")) == NULL)
    {
        printf("\nError creating output file");
        fclose(fp_in);
        return 1;
    }
    
    // Read lines and write non-empty lines to output file
    while (fgets(line, SIZE, fp_in))
    {
        char *pos = line;
        while (*pos == ' ' || *pos == '\t') pos++; // Trim leading spaces
        if (*pos != '\n' && *pos != '\0') // Skip blank lines
        {
            fputs(line, fp_out);
        }
    }
    
    fclose(fp_in);
    fclose(fp_out);
    
    printf("Blank lines removed. Processed file saved as output.txt\n");
    return 0;
}
