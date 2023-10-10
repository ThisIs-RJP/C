#include <stdio.h>

int main() {
    int num1 = 5;
    int num2 = 10;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    int *ptr1 = &num1;
    int *ptr2 = &num2;
    // int *ptr1: This declares ptr1 as a pointer to an integer. 
    // It means ptr1 can store the memory address of an integer variable.

    // &num1: The ampersand (&) is used to get the memory address of the 
    // integer variable num1. So, &num1 is a memory address.

    // int *ptr1 = &num1;: This line assigns the memory address of num1 
    // to the pointer variable ptr1. In other words, ptr1 now "points to" 
    // or holds the memory address of num1. 

    // Swap the values of num1 and num2 using pointers
    int temp = *ptr1;
    *ptr1 = *ptr2; // ptr1 changes to ptr2
    
    // the initial memory address of ptr1 is being changes to ptr
    *ptr2 = temp; // ptr2 changes to ptr1

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}