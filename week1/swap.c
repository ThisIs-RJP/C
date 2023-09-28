#include <stdio.h>

// Swapping variables

int main(int argc, char*argv[]) {
    int num1, num2, temp;

    printf("Enter the first number\n> ");
    scanf("%d", &num1);

    printf("\nEnter the second number\n> ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("The first number is now %d and the second number is now %d", num1, num2);
    printf("\n");

}