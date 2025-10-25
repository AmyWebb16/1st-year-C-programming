/*
Array of structures
*/

#include <stdio.h>

#define LENGTH 11
#define S_LENGTH 21
#define SIZE 5


//Structure template(s)
struct date
{
   int day;
   int month;
   int year;
};

struct student_rec
{
   int student_ID;
   char firstname[LENGTH];
   char surname[S_LENGTH];
   int results[SIZE];
   struct date DOB;
};


// Function signature(s)
// ...


int main()
{
    int j;
    int i;
    struct student_rec students[SIZE];


    
    printf("\nEnter ID for each student:");
    
    // Enter the student ID for all elements in the array
    for(i = 0; i < SIZE; i++)
    {
       printf("\nEnter ID for student %d :", i+1);
       scanf("%d", & students[i].student_ID);
    
    } // end for

    //Clear the buffer
    while(getchar() != '\n');

    
    // Enter the first name for all elements in the array
    for(i = 0; i < SIZE; i++)
    {
       printf("\nEnter first name for student %d :", i+1);
       fgets(students[i].firstname, LENGTH, stdin);
    
    } // end for

    //Enter surname for each student
    for(i = 0; i < SIZE; i++)
    {
       printf("\nEnter surname for student %d :", i+1);
       fgets(students[i].surname, LENGTH, stdin);
    
    } // end for

    //Enter the results for each student
    for(i = 0; i < SIZE; i++)
    {
        printf("\nEnter the results for student %d :", i+1);

        for(j = 0; j < SIZE; j++)
        {
            scanf("%d", & students[i].results[j]);

        }//end for
    }
    //Enter the DOB for each student
    for(i = 0; i < SIZE; i++)
    {
        printf("\nEnter DOB for student %d :", i+1);
        scanf("%d", & students[i].DOB.day);
        scanf("%d", & students[i].DOB.month);
        scanf("%d", & students[i].DOB.year);

    }//end for

   // Display the data entered 
   printf("\nThe Student ID for each student is:");
    
   for(i = 0; i < SIZE; i++)
   {
       printf("%d ", students[i].student_ID);

   } // end for

   printf("\nThe Student first name for each student is: ");

   for(i = 0; i < SIZE; i++)
   {
       printf("\n%s", students[i].firstname);
  
   } // end for

   printf("\nThe Student surname for each student is: ");
   for(i = 0; i < SIZE; i++)
   {
       printf("\n%s", students[i].surname);
  
   } // end for

   printf("\nThe Student results for each student is: ");
   for(i= 0; i < SIZE; i++)
   {
        printf("\n\nThe results for student %d is:", i+1);
        for(j = 0; j < SIZE; j++)
        {
            printf("\n%d", students[i].results[j]);

        }//end for

   }//end for

   printf("\nThe Date of Birth for each student:")
    for(i = 0; i < SIZE; i++)
    {
        printf("\nEnter DOB for student %d :", i+1);
        

    }//end for

   return 0;

} // end main()