/*Program that 1.stores information for athelte's record 2. user must enter enter final number only when program runs. 3. function only to enter all athlete record details for final number of athletes qualified 4. function to confirm paddy jim o@brien is participant
Author: Amy Webb
Date:08-04-2025
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

#define SIZE 50
#define NUM 2

//Structures templates
struct record
{
    char first_name [SIZE];
    char surname [SIZE];
    char nationality [SIZE];
    int day;
    int month;
    int year;
    float height;
    float weight;
    char event [SIZE];
};

//Function signatures
void enter (struct record *ptr);
void display(struct record ptr[]);
void check (struct record ptr[]);

int main()
{
    int i = 0;
    int num = 0;
    struct record athlete1;
    struct record athlete2;

    //find out how many athletes are qualifed
    printf("\nHow many athletes are competing in the alpine skiing event?");
    scanf("%d", & num);

    //clear buffer
    while (getchar() != '\n');

    //use if to see how many athletes competing
    if(num >=1)
    {
        enter(&athlete1);
        display(&athlete1);

        if(num >= 2)
        {
            enter(&athlete2);
            display(&athlete2);

        }//end if
        
    }//end if

    else
    {
        printf("There has to be more than one athlete");
        return 0;

    }//end else
    
    //Check to see if irish runner is competeing
    check(&athlete1);
    check(&athlete2);

    return 0;

}//end main()

void enter (struct record *ptr)
{
    int i;

    //enter all data for athlete record
    printf("\nPlease enter athlete first name");
    fgets(ptr[i].first_name, SIZE, stdin);

    printf("\nPlease enter athlete surname");
    fgets(ptr[i].surname,SIZE,stdin);

    printf("\nPlease enter athlete nationality");
    fgets(ptr[i].nationality,SIZE,stdin);

    printf("\nPlease enter athlete day of birth");
    scanf("%d", &ptr[i].day);

    printf("\nPlease enter athlete month of birth");
    scanf("%d", & ptr[i].month);

    printf("\nPlease enter athlete year of birth");
    scanf("%d", &ptr[i].year);

    printf("\nPlease enter athlete Height in meters");
    scanf("%f", &ptr[i].height);

    printf("\nPlease enter athlete weight in kilograms");
    scanf("%f", &ptr[i].weight);

    //clear buffer
    while (getchar() != '\n');

    printf("\nPlease enter athlete event");
    fgets(ptr[i].event,SIZE,stdin);

}//end enter()

void display(struct record ptr[])
{
    int i;
    //display athlete record
    printf("\nAthlete firstname %s", ptr[i].first_name);

    printf("\nAthlete surname %s", ptr[i].surname);

    printf("\nAthlete Nationality %s", ptr[i].nationality);

    printf("\nAthlete DOB: %d-%d-%d", ptr[i].day,ptr[i].month,ptr[i].year);

    printf("\nAthlete Height in metres: %.2f m", ptr[i].height);

    printf("\nAthlete weight in kilograms: %.2f kg", ptr[i].weight);

    printf("\nAthlete event: %s", ptr[i].event);
   

}//end display()

void check (struct record ptr[])
{
    int i = 0;
    int result1 = 0;
    int result2 = 0;

    //compare both strings and check if their the same
    result1 = strcmp(ptr[i].first_name, "Paddy Jim");
    result2 = strcmp(ptr[i].surname, "O'Brien");

    //Check if strings are the same
    if(result1 == 0 && result2 == 0)
    {
        printf("\nPaddy Jim O'Brien is competeing");

    }//end if

    else
    {
        printf("\nPaddy Jim O'Brien is not competeing");

    }//end else
    
}//end check()

