/* 
Reading a character from a file 
*/ 

#include <stdio.h> 

int main() 
{ 
    //Create a file pointer to a file 
    FILE *fp; 
    
    char char_in; 
    
    
    //Open the file called file.txt for reading and check if this is successful 
    if ( (fp = fopen("file.txt", "r")) == NULL ) 
    { 
        printf("\nError opening file"); 

        return 0;
    } // end if 
    else 
    { 
        printf("\nFile opened successfully\n\n"); 

        // read each character separately from the file and display
        // to standard output 
        while( ( char_in = fgetc(fp) ) != EOF ) 
        { 
            printf("%c", char_in); 

        } // end while 
    
        // Close the file after completing all associated work 
        fclose(fp); 
        
    } // end else 
    
    return 0; 

} // end main()