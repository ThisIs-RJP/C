#include <stdio.h>

// The longer way of printing the greater of 3 numbers using a list
// While sorting a list by moving elements

int main(int argc, char*argv[]){
    int num1, num2, num3, temp;

    int myNumbers[10] = {};

    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    printf("Enter your third number: ");
    scanf("%d", &num3);

    myNumbers[0] = num1;
    myNumbers[1] = num2;
    myNumbers[2] = num3;

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (myNumbers[i] > myNumbers[j]) {
                temp = myNumbers[i];
                myNumbers[i] = myNumbers[j];
                myNumbers[j] = temp;
            }
        }
    }
    
    printf("The order of the numbers given in ascending order is: ");

    for (int i = 0; i < 3; i++) {
        printf("%d", myNumbers[i]);
    }

    printf("%s %d", "\nThe largest number in the array is", myNumbers[2]);
    printf("\n");
}