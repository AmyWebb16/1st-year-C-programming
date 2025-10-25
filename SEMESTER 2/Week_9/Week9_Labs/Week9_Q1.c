/*Program
Author: Amy Webb
Date: 25-03-2025
*/

#include <stdio.h>
#include <string.h>

#define SIZE 50

//Structures
struct seat
{
    int num [SIZE];
    char letter[SIZE];
};

struct flight_details
{
    char airline_name[SIZE];
    int flight_num[SIZE];
    char passenger_surname[SIZE];
    struct seat chair;
    char destination[SIZE];
    int no_bags[SIZE];
};

//Functions
void enter(struct flight_details *);
void display(struct flight_details);

int main()
{
    struct flight_details person1;
    struct flight_details person2;

    //Enter data into the structure
    enter(& person1);
    enter(& person2);

    //Display the structure
    display(person1);
    display(person2);

    return 0;

}//end main()

void enter(struct flight_details *ptr)
{
    //enter flight name
    printf("\nPLease enter airline name:");
    fgets(ptr -> airline_name, SIZE, stdin);

    //enter flight number
    printf("\nPlease enter flight number:");
    scanf("%d",  ptr -> flight_num);

    while (getchar() != '\n');

    //enter passenger surname
    printf("\nPlease enter passenger surname:");
    fgets(ptr -> passenger_surname, SIZE, stdin);

    //enter seat number & letter
    printf("\nPlease enter seat number and letter:");
    scanf("%d",  ptr -> chair.num);
    scanf("%c", ptr -> chair.letter);

    while (getchar() != '\n');

    //enter destination
    printf("\nPlease enter the desintation of the flight:");
    fgets(ptr -> destination, SIZE, stdin);

    //enter no. of bags
    printf("\nPlease enter the number of bags:");
    scanf("%d",  ptr -> no_bags);

    while (getchar() != '\n');


}//end enter()

void display(struct flight_details per)
{
    //display flight details
    printf("\nFlight Details\n");

    //display airline
    printf("\nAirline name: %s",per.airline_name );

    //display flight number
    printf("\nFlight number: %d", *per.flight_num);

    //display passenger surname
    printf("\nPassenger surname: %s", per.passenger_surname);

    //display seat number
    printf("\nSeat number: %d%c", *per.chair.num, *per.chair.letter);

    //diplay desintation
    printf("\nDestination: %s", per.destination);

    //display no. of bags
    printf("\nNo. of bags: %d", *per.no_bags);
}
