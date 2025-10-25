/* 
Reading a character from a file and writing that same character to a new file
*/ 

#include <stdio.h> 

int main() 
{ 
    //Create a file pointer to a file 
    FILE *fp_in, *fp_out;
    
    char char_in; 
    
    
    //Open the file called file.txt for reading and check
    //if this is successful 
    if ( (fp_in = fopen("file.txt", "r")) == NULL ) 
    { 
        printf("\nError opening file"); 
    } // end if
        
    // Open the file called new.txt for writing. This is 
    // destination file being copied to. Check if this is 
    // successful 
    else if ( (fp_out = fopen("new.txt", "w") ) != NULL ) 
    { 
        // copy the file from file.txt into new.txt 
        // character by character 
        while( (char_in = fgetc(fp_in) ) != EOF ) 
        { 
            // write the character char_in to new.txt 
            fputc(char_in, fp_out); 
            
        } // end while 
    
        printf("\n\nCopying completed successfully"); 
        
        // Close both files after completing all associated work 
        fclose(fp_in); 
        fclose(fp_out); 
    
    } // end else if 
    else 
    { 
        printf("\nError creating new file"); 
    }
    
    return 0; 

} // end main()