#include <stdio.h>
#include <stdlib.h>

// Calculates how much crypto currency you can buy with the money you have

int main(int argc, char * argv[]){

    float money;

    printf("Enter the amount of money you want to use for crypto-currencies\n> ");
    scanf("%f", &money);
    
    // int amtBitcoin = money 
    printf("With %.2f you can buy %.0f Bitcoin, %.0f Ethereum, and %.0f Litecoins\n", money, (money / 50), (money / 25), (money / 10));

    return(0);
}