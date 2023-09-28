#include <stdio.h>
#include <ctype.h>

int main(int argc, char*argv[]) {

    float bitcoin, incOrDec;
    char userIn;

    printf("Enter your Bitcoin at the time of purchase\n> ");
    scanf("%f", &bitcoin);

    printf("Enter the percentage for the increase/decrease of Bitcoin\n> ");
    scanf("%f", &incOrDec);

    printf("Is the value of your bitcoin increasing or decreasing? Type I for increasing or D for decreasing\n> ");
    scanf(" %c", &userIn);

    if (tolower(userIn) == 'i') {
        printf("Your bitcoin value is %d and increased by %d\n", (int)((bitcoin * (incOrDec * 0.01)) + bitcoin), (int)(bitcoin * (incOrDec * 0.01)));
    }

    else {
        printf("Your bitcoin value is %d and decreased by %d\n", (int)((bitcoin * (incOrDec * 0.1)) - bitcoin), (int)(bitcoin * (incOrDec * 0.01)));
    }
}