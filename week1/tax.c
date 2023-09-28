#include <stdio.h>

// outputting the price of a laptop given the price before tax

int main() {

    float price;

    printf("Enter the price of the laptop\n> ");

    scanf("%f", &price);

    float finalPrice = (price * 0.1) + price;
    printf("The final price for this laptop is $%.2f\n", (price * 0.1) + price);

    return(0);

}