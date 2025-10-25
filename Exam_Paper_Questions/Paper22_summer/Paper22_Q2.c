#include <stdio.h>
#include <string.h>

#define SIZE 50

struct date
{
    int day[2];
    int month[2];
    int year[4];
};

struct patient_info
{
    char firstname[SIZE];
    char surname[SIZE];
    struct date DOB;
    char address[SIZE];
    int phone[SIZE];
};

//function signatures
void enter(struct patient_info *);
void display(struct patient_info);


int main()
{
    //Intialising variables of struct
    struct patient_info person1;
    struct patient_info person2;

    //calling functions to enter data
    enter(& person1);
    enter(& person2);

    display(person1);
    display(person2);

    return 0;

}//end main()

void enter(struct patient_info *ptr)
{
    //Enter firstname
    printf("\nPlease enter first name:");
    fgets(ptr -> firstname, SIZE, stdin);

    //Enter surname
    printf("\nPlease enter surname:");
    fgets(ptr -> surname, SIZE, stdin);

    //Enter date of birth
    printf("\nEnter date of birth in order (dd/mm/yyy):");
    scanf("%d", ptr -> DOB.day);
    scanf("%d", ptr -> DOB.month);
    scanf("%d", ptr -> DOB.year);

    //Clear buffer
    while(getchar() != '\n');

    //Enter address
    printf("\nPlease enter your address:");
    fgets(ptr -> address, SIZE, stdin);

    //Enter phone
    printf("\nPlease enter your phone number:");
    scanf("%d", ptr -> phone);

    //Clear buffer
    while(getchar() != '\n');

}//end enter()

void display(struct patient_info per)
{
    printf("\n\nPatient Information\n");

    //Display firstname
    printf("\nFirstname: %s ", per.firstname);

    //Display surname
    printf("\nSurname: %s", per.surname);

    //Display date of birth
    printf("\nDate of Birth: %d-%d-%d", per.DOB.day, per.DOB.month, per.DOB.year );

    //Display address
    printf("\nAddress: %s", per.surname);

    //Display phone number
    printf("\nPhone Number: %d", per.phone);

}//end display()