/*Program that gets biographical data and a) stores it in a strucutre, b) displays the structure c) copy the strucutre into second variable and modifies it
d) display the second person.
Author: Amy Webb
Date: 18-03-2025
*/

#include <stdio.h>
#include <string.h>


#define SIZE 50
#define SIZE1 10


//Strunctures
struct bio_data
{
    char firstname [SIZE];
    char surname [SIZE];
    int day [2];
    int month [2];
    int year [4];
    float height [SIZE1];
    float weight [SIZE1];
    char eye_colour [SIZE];
    char country [SIZE];
};

//Function signatures
void enter(struct bio_data *);
void display(struct bio_data);
void modify(struct bio_data *);


int main()
{
    struct bio_data person;
    struct bio_data person2;

    //Enter the data into the structure person variable
    enter(& person);

    //Display the contents of the strucutre variable of person
    display(person);

    //Copying the data for fistperson in second person
    person2 = person;

    modify(&person2);

    display(person2);
    
    return 0;

}//end main

void enter(struct bio_data *ptr)
{
    
    //Entering the first name
    printf("\nEnter first name: ");
    fgets(ptr -> firstname, SIZE, stdin);

    //Entering the surname
    printf("\nEnter surname: ");
    fgets(ptr -> surname, SIZE, stdin);

    //Entering the day of birth
    printf("\nEnter the day you were born in numbers: ");
    scanf("%d", & ptr -> day);

    //Entering the month of birth
    printf("\nEnter your month of birth in numbers: ");
    scanf("%d", & ptr -> month);

    //Entering the year of birth
    printf("\nEnter the year you were born in numbers: ");
    scanf("%d", & ptr -> year);

    //Entering the height in centimetres
    printf("\nEnter your height in centimetres: ");
    scanf("%f", & ptr -> height);

    //Entering the weight in kilograms
    printf("\nEnter your weight in kilograms: ");
    scanf("%f", & ptr -> weight);

    //Clearing the stdin buffer
    while(getchar() != '\n');

    //Entering the eye colour
    printf("\nEnter your eye colour: ");
    fgets(ptr -> eye_colour, SIZE, stdin);

    //Entering the country of citiszinship
    printf("\nEnter your country of citizenship: ");
    fgets(ptr -> country, SIZE, stdin);

}//end enter()

void display(struct bio_data per)
{
    printf("\nBiographical Data\n");

    //Displaying the firstname
    printf("\nFirstname: %s", per.firstname);

    //Displaying the surname
    printf("\nSurname: %s", per.surname);

    //Displaying the date of birth
    printf("\nDate of Birth: %d-%d-%d\n", *per.day, *per.month, *per.year);

    //Displaying the height
    printf("\nHeight: %.2fcm\n", *per.height);

    //Displaying the weight
    printf("\nWeight: %.2fkg\n", *per.weight);

    //Displaying the eye colour
    printf("\nEye Colour: %s", per.eye_colour);

    //Displaying the country of citizinship
    printf("\nCountry of Citizenship: %s", per.country);

}//end display()

void modify(struct bio_data *ptr1)
{
    int choice = 0;

    do
    {
        printf("\nChoose a seletion you want to change of person 2: \n");
        printf("1.Firstname\n 2.Surname\n 3.Day of birth\n 4.Month of birth\n 5.Year of birth\n 6.height\n 7.weight\n 8.Eye colour\n 9.Country of Citizinship\n 10.done\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        //Clearing the stdin buffer
        while(getchar() != '\n');

        switch(choice)
        {
            case 1:
            printf("Enter new first name: ");
            fgets(ptr1 -> firstname, SIZE, stdin);
            break;

            case 2:
            printf("Enter new sur name: ");
            fgets(ptr1 -> surname, SIZE, stdin);
            break;

            case 3:
            printf("Enter new day of birth : ");
            scanf("%d", & ptr1 -> day);
            break;

            case 4:
            printf("Enter new month of birth: ");
            scanf("%d", & ptr1 -> month);
            break;

            case 5:
            printf("Enter new year: ");
            scanf("%d", & ptr1 -> year);
            break;

            case 6:
            printf("Enter new height: ");
            scanf("%f", & ptr1 -> height);
            break;

            case 7:
            printf("Enter new weight: ");
            scanf("%f", & ptr1 -> weight);
            break;

            case 8:
            printf("Enter new eye colour: ");
            fgets(ptr1 -> eye_colour, SIZE, stdin);
            break;

            case 9:
            printf("Enter new country of citizinship: ");
            fgets(ptr1 -> country, SIZE, stdin);
            break;

            default:
            printf("Invalid choice, please try again.\n");
        }

    }while (choice != 10);
   
}//end modify()
