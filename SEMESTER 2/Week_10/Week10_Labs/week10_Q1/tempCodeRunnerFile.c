/*Program that compares two text files and display any differences
Author: Amy Webb
Date: 01-04-2025
*/

#include <stdio.h>
#include <string.h>

#define SIZE 50

//Structures

//Functions

int main()
{

    //Create a file pointer to a file
    FILE *fp1, *fp2;


    int file1, file2;
    int result = 0;

    //Open the file for reading and check if this is successful
    if( (fp1 = fopen("week10_Q1a.txt", "r")) == NULL)
    {
        printf("\nError opening frist file");
        return 0;

    }//end if

    if( (fp2 = fopen("week10_Q1b.txt", "r")) == NULL)
    {
        printf("\nError opening seocnd file");
        fclose(fp1);
        return 0;

    }//end if

    //compare the two files character by character
    while((file1 = fgetc(fp1)) != EOF && (file2 = fgetc(fp2)) != EOF)
    {
        if(file1 == file2)
        {
            printf("\nYes");
        }

        else
        {
            printf("\nNo");
        }
    }

    
    fclose(fp1);
    fclose(fp2);

     
    return 0;

}//end main()