#include <stdio.h>

// Outputs the greater of 2 numbers

int main(int argc, char*argv[]){
    int num1;
    int num2;

    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%s %d", "The greater number is", num1);
    }

    else {
        printf("%s %d", "The greater number is", num2);

    }
    printf("\n");
}