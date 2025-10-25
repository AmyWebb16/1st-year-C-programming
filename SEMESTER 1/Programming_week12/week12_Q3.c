/*write a program that uses two float variables, enter values for variables. print the address of variables and address of pointers.
 make pointers point to variable respectafully and use dereference operator
 Author: Amy Webb
 Date: 03-12-2024
*/

 #include <stdio.h>
 #include <stdlib.h>

 #define SIZE 1


 int main()
 {
    float input1 [SIZE];
    float input2 [SIZE];
    float *ptr1;
    float *ptr2;

    printf("Enter first number\n",SIZE);
    scanf("%f", &input1);

    printf("Enter second number\n", SIZE);
    scanf("%f", &input2);


    
    //make pointers point to the variables respectfully
    ptr1 = &input1;
    ptr2 = &input2;


    //print the addresses of variables
    printf("the address of input1 is %p\n" ,ptr1);
    printf("the address of input2 is %p\n" ,ptr2);

    printf("\n\n");

    //print the addresses of pointers
    printf("the address of pointer 1 is %p\n" ,&ptr1);
    printf("the address of pointer 2 is %p\n" ,&ptr2);

    printf("\n\n");

    //print the contents of pointers
    printf("the contents of pointer 1 is %p\n" ,ptr1);
    printf("the contents of pointer 2 is %p\n" ,ptr2);

    printf("\n\n");

    //using derefernce operator print the contents of the address for the pointers
    printf("the contents of the address of pointer1 is %.2f\n" ,*ptr1);
    printf("the contents of the address of pointer2 is %.2f\n" ,*ptr2);

    return 0;

 }//end main