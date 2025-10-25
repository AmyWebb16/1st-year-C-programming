/*Program that uses two functions. One calculate the area of a square, Two calculates the area of a cirlce. Ask user for values of side and redius. Use pass by refernece and return values back to main.
Author: Amy Webb
Date: 18-02-2025
*/

#include <stdio.h>

//Function signatures
float square(float *);
float circle(float *);

int main()
{
    float side = 0;
    float radius = 0;
    float area_sq = 0;
    float area_ci = 0;

    //Ask user for side length for square.
    printf("Please enter the size of side for the square.\n");
    scanf("%f", &side);

    //Ask user for size of radius for circle.
    printf("Please enter the size of radius for the circlce.\n");
    scanf("%f", &radius);

    //Call the sqaure function to find area.
    area_sq = square(&side);

    //Call the circle function to find area.
    area_ci = circle(&radius);

    //Display the values of both area of square and circle
    printf("The area of the square is %.2f units^2\n", area_sq);
    printf("The area of the circle is %.2f units^2\n", area_ci);

    return 0;

}//end main()


float square(float *side)
{
    float area = 0;

    //Calculate area of square (side by side)
    area = (*side) * (*side);

    return area;

}//end square()

float circle(float *radius)
{
    float area = 0;
    float pi = 3.14;

    //Calculate area of circle ( pi by radius squared)
    area = pi*(*radius)*(*radius);

    return area;

}//end circle()