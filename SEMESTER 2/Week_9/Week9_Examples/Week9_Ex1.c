/* 
Opening and Closing a file in C 
*/ 
#include <stdio.h> 

int main() 
{ 
    //Create a file pointer to a file 
    FILE *fp;
    
    
    //Open the file called file.txt for reading 
    fp = fopen("file.txt", "w");
    
    // Check if the file was opened successfully 
    if(fp == NULL) 
    { 
        printf("\nError opening file");

        // end program
        return 0;
    
    } // end if 
    else 
    { 
       printf("\nfile.txt opened successfully"); 
    
       // Close the file after completing all associated work 
       fclose(fp); 
    
    } // end else 
    
    return 0; 
    
} // end main()