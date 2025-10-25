/*Calculate and display of each elements of mpl
Author: Amy Webb
Date: 9-12-2024
*/

#include <stdio.h>

int main()
{
    float litres[] = {11.5, 11.21, 12.7, 12.6, 12.4 };
    float miles[] = {471.5, 358.72, 495.3, 453.6, 421.6 };
    int mpl[5]; //miles per litre
    int i;


    //array_name[i] = *(array_name + i)

    //Calculate mpl values
    for(i = 0; i < 5; i++)
    {
        *(mpl + i) = *(miles + i)/ *(litres + i);

    }//end for

    //Display the contents of mpl
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", *(mpl + i));

    }//end for

    return 0;

}//end main()