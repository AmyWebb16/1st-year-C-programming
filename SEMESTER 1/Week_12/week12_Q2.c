/*Program that compares the time taken using fgetc and fgets to read a large text file
Author: Amy Webb
Date: 29-04-2025
*/

#include <stdio.h>

#define SIZE 1024

// function signatures
void read_fgetc(char *);
void read_fgets(char *);

int main()
{
    char *filename = "large.txt";

    // Measure for fgetc
    printf("Reading with fgetc()\n");
    read_fgetc(filename);
    printf("End reading with fgetc\n");

    // Measure for fgets
    printf("Reading with fgets()\n");
    read_fgets(filename);
    printf("End reading with fgets\n");

    return 0;

} // end main()

void read_fgetc(char *filename)
{
    FILE *file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Failed to open file with fgetc\n");
        return;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }

    fclose(file);
}

void read_fgets(char *filename)
{
    FILE *file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Failed to open file with fgets\n");
        return;
    }

    char buff[SIZE];

    while (fgets(buff, sizeof(buff), file))
    {
        fputs(buff, stdout);
    }

    fclose(file);

} // end read_fgets()
