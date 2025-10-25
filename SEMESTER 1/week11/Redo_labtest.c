/*A simple random number generator that will generate 5 random numbers between 1 - 20 (inclusive). The program is menu driven
and will only terminate when the user wishes to do so.
Date: 20-12-2024
Author: Amy Webb
*/

#include <stdio.h>
#include <stdlib.h> // this header file is required for the rand() function
#include <time.h> // used in srand() for seeding purposes

#define SIZE 5

int main()
{
    int num = 0;
    int numbers[SIZE] = {0};
    int set[20] = {0};
    char choice;
    int highest;
    int lowest;
    int i;

    do
    {
        //display main menu
        printf("\n\n1. Generate %d random numbers", SIZE);
        printf("\n2. Exit programs\n");
        scand(" %c, & choice");

        if(choice =='1')
        {
            printf("Generating a random number between 1 - 20 \n");

            //seed the random number generator with a range 0 - large number
            srand(time(NULL));

            do
            {
                //num is assigned a random number between 1 -20
                num = rand() % 20 + 1;
                
                //Check if the number is not already in the set
                if(set[num - 1] == 0)
                {
                    numbers[i] = num;

                    //Mark the number as used in the set
                    set[num - 1] = 1;

                    i++;
                }//end if

            } while (i < 5);

            printf("\n\n Random genrated numbers are:");

            //Display the random numbers
            for(i = 0)
            
        }//end if

    }

}//end main