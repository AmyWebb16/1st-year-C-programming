/*write a program that declares an int and character and 2 pointers, pointers should be pointing at the variables.
 initaialise the variables and pointers and display contents and addresses
 Author: Amy Webb
 Date: 03-12-2024*/


 #include <stdio.h>

 int main()
 {
    int num1 = 5;
    char char1 = 'a';
    int *ptr1;
    char *ptr2;
    int *ptr3;

    //store the address of num1 inside ptr1
    ptr1 = &num1;

    //store the address of char1 into ptr2
    ptr2 = &char1;

    // 2a) store the address of char1
    ptr3 = &char1;


    //1a) print the address and contents of num1 and char1 on separte line
    printf("num1 contents: %d\nnum1 address: %p \n", num1,ptr1);
    printf("char1 contents: %c\nchar1 address: %p\n", char1,ptr2);

    //1b) print the contents of ptr1 and ptr2
    printf("ptr1 contents are %p\n", ptr1);
    printf("ptr2 contents are %p\n", ptr2);


    //1c)using defernece operator print the address contents of the pointer
    printf("the address contents of ptr1 are %d\n", *ptr1);
    printf("the address contents of ptr2 are %c\n", *ptr2);


    //2b)using deference operator print the address contents of the address in ptr3
    printf("the address contents of ptr3 are %c\n", *ptr3);


    return 0;

 }