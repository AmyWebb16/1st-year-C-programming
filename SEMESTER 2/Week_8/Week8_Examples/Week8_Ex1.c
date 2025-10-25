/*
Nested Structures
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
// …

int main()
{
    int i;
    struct student_rec stu;

    // for explaining having a pointer to a structure containing a nested structure (see more below - line 70)
    //struct student_rec *ptr;
    //ptr = &stu;
    
    
    printf("\nEnter ID:\n");
    scanf("%d", & stu.student_ID);
    
    // Clear input buffer
    while(getchar() != '\n');
    
    printf("\nEnter first name:\n");
    fgets(stu.firstname, LENGTH, stdin);
    
    printf("\nEnter surname:\n");
    fgets(stu.surname, S_LENGTH, stdin);
    
    printf("\nEnter %d results\n", SIZE);
    
    for(i = 0; i < SIZE; i++)
    {
       scanf("%d", & stu.results[i]);
    } // end for
    
    printf("\nEnter date of birth");
    printf("\n(order: day, month, year)\n");

    scanf("%d", & stu.DOB.day);
    scanf("%d", & stu.DOB.month);
    scanf("%d", & stu.DOB.year);

    // for explaining having a pointer to a structure containing a nested structure
    //scanf("%d", & ptr -> DOB.day);

    
    
    
    // Display data entered into the stu variable
    //
    printf("\nStudent record is:");
    printf("\nID: %d", stu.student_ID);
    printf("\nFirst name: %s", stu.firstname);
    printf("\nSurname: %s", stu.surname);
    printf("\nResults are: ");
    
    for(i = 0; i < SIZE; i++)
    {
       printf("\n%d ", stu.results[i]);
    } // end for
    
    printf("\nDate of Birth:");
    printf("\nDay %d", stu.DOB.day);
    printf("\nMonth %d", stu.DOB.month);
    printf("\nYear %d", stu.DOB.year);
    
    return 0;
    
} // end main()