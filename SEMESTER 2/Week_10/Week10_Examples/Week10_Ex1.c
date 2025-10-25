/* 
Program to read a string from a file and display to standard output 
*/ 

#include <stdio.h> 

#define MAX_CHARS 81

int main() 
{ 
    //Create a file pointer 
    FILE *fp_in; 
    
    // Array to store the string from the file 
    char one_line[MAX_CHARS]; 
    
    //Open the file called file.txt for reading 
    //and check if this is successful 
    if ( (fp_in = fopen("week10_file.txt", "r")) == NULL ) 
    { 
        printf("\nError opening file"); 

        // end program immediately
        return 0;
        
    } // end if 
    else 
    { 
        /* 
        Read at most:
        (i) MAX_CHARS - 1 characters from the file 
        or
        (ii) until a new line character is read
        or
        (iii) the end of the file is reached 
        */ 
        while( fgets(one_line, MAX_CHARS, fp_in) != NULL) 
        { 
            printf("%s", one_line);
        
        } // end while 
        
        // Close the file once finished 
        fclose(fp_in); 
        
    } // end else 
    
    return 0; 

} // end main()