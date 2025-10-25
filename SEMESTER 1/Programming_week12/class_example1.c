/*2024 exam paper (summer) Question 2 [DMA Question]
Author:Amy Webb
Datee:03-12-2024*/


#include <stdio.h>
#include <stdlib.h>



int main()
{
    int no_patients = 0;
    int i;
    int *ptr;
    int total_fee = 0;
    float average_fee = 0;
    

    //part 1 
    printf("how many pateints will you see today\n");
    scanf("%d", &no_patients);

    //part 2
    //not needed if using calloc


    //part 3
    //allocate the memory
    ptr = calloc(no_patients, sizeof(int));


    //part 4 - check if memory allocate
    if(ptr== NULL)
    {
        printf("no memory avaiable");
        
        return 0;
    }//end else


    else
    {
        //part 5
        printf("\n Enter the fee paid by each pateint\n");

        for(i = 0; i < no_patients; i++)
        {
            printf("\n Enter fee for patient %d", i + 1);

            scanf("%d", &*(ptr + i));


            //keep a running total 
            total_fee = total_fee + *(ptr + i);
        }//end for

        //calculate average fee
        average_fee = (float)total_fee / no_patients;

        printf("\n the total fee is %d", total_fee);
        printf("\n the average fee of the day is %.1f", average_fee);

    }//end else
    
    //part 6
    free(ptr);

    return 0;

}//end main