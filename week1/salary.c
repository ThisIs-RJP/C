#include <stdio.h>
#include <stdlib.h>

// Calculates monthly salary

int main(char argc, char * argv[]) {

    int min = 20 * atoi(argv[1]);
    int childPay = 30 * atoi(argv[2]);

    int total = 400 + min + childPay;

    printf("The total amount is $%d. $%d minimum wage + $%d");

}