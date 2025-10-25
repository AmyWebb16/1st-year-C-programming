/*Program that takes 2 person airline details in and array
Author: Amy Webb
Date: 25-03-2025
*/

#include <stdio.h>
#include <string.h>

#define SIZE 50
#define PEP 2

//Structures
struct seat
{
    int num [SIZE];
    char letter[SIZE];
};

struct flight_details
{
    char airline_name[SIZE];
    int flight_num;
    char passenger_surname[SIZE];
    struct seat chair;
    char destination[SIZE];
    int no_bags;
};

//Functions
void enter(struct flight_details  *ptr, int size);
void display(struct flight_details ptr[], int size);

int main()
{
    struct flight_details passenger[PEP];
    
    //Enter data into the structure
    enter(passenger, PEP);
    
    //Display the structure
    display(passenger, PEP);
    

    return 0;

}//end main()

void enter(struct flight_details *ptr, int size)
{
    int i;
    //enter flight name
    for(i = 0; i < size ; i++)
    {
        printf("\nPLease enter airline name for passenger %d:", i+1);
        fgets(ptr[i].airline_name, SIZE, stdin);
    }

    //enter flight number
    for(i = 0; i < size ; i++)
    {   printf("\nPlease enter flight number for passenger %d:", i+1);
        scanf("%d",  & ptr[i].flight_num);
    }

    while (getchar() != '\n');

    //enter passenger surname
    for(i = 0; i < size; i++)
    {   printf("\nPlease enter passenger surname for passenger %d:", i+1);
        fgets(ptr[i].passenger_surname, SIZE, stdin);
    }

    //enter seat number & letter
    for(i = 0; i < size; i++)
    {   printf("\nPlease enter seat number for passenger %d:", i+1);
        scanf("%d",  &ptr[i].chair.num);

        while (getchar() != '\n');

        printf("\nPlease enter seat letter for passenger %d:", i+1);
        scanf("%c", &ptr[i].chair.letter);
    }

    while (getchar() != '\n');

    //enter destination
    for(i = 0; i < size; i++)
    {   printf("\nPlease enter the desintation of the flight for passenger %d:", i+1);
        fgets(ptr[i].destination, SIZE, stdin);
    }

    //enter no. of bags
    for(i = 0; i < size; i++)
    {   printf("\nPlease enter the number of bags for passenger %d:", i+1);
        scanf("%d",  &ptr[i].no_bags);
    }
    while (getchar() != '\n');


}//end enter()

void display(struct flight_details ptr[], int size)
{
    int i;
    //display flight details
    for(i = 0; i < size; i++)
    {
        printf("\n\nFlight Details for passenger %d\n", i+1);

        //display airline
        printf("Airline name: %s", ptr[i].airline_name );
        
        //display flight number
        printf("Flight number: %d\n", ptr[i].flight_num);

        //display passenger surname
        printf("Passenger surname: %s", ptr[i].passenger_surname);
        
        //display seat number
        printf("Seat number: %d\n", *ptr[i].chair.num);
        printf("%c", *ptr[i].chair.letter);
        
        //diplay desintation
        printf("Destination: %s", ptr[i].destination);
        
        //display no. of bags
        printf("No. of bags: %d", ptr[i].no_bags);
    }
}
