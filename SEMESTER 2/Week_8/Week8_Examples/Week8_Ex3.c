/*
The typedef statement. Example using typedef with nested structures
*/

#include <stdio.h>

#define LENGTH 11
#define S_LENGTH 21
#define SIZE 5


typedef char STRING;


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
   STRING firstname[LENGTH];
   char surname[S_LENGTH];
   int results[SIZE];
   struct date DOB;
};


// Function signature(s)
// ...


int main()
{
    int i;
    
    //Declare a typedef
    typedef int* INT_POINTER;
    
    int *ptr;
    //int *ptr2;
    INT_POINTER ptr2;
    
    STRING sentence[LENGTH] = "Hello";
    
    printf("\n%s", sentence);
    
    return 0;
    
} // end main()