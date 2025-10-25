/*Change the blank spaces in a character array into underscores, using pointer notation
Author:Amy Webb
Date: 9-12-2024
*/

#include <stdio.h>


int main()
{
    char chars[] = {'a',' ','b',' ','c',' ',' ','d'};
    int i;

    //array_name[i] = *(array_name + i)


    //Display contents of the array before the change
    for(i = 0; i < 8; i++)
    {
        printf("%c ", *(chars + i));

    }//end for

    
    //Change the blank elements in the array with an underscore
    for(i = 0; i < 8; i++)
    {
        if(*(chars + i) == ' ')
        {
            *(chars + i) = '_';

        }//end if

    }//end for


    printf("\n");
    
    //Display contents of the array after the change
    for(i = 0; i < 8; i++)
    {
        printf("%c ", *(chars + i));

    }//end for

    return 0;

}//end main()