#include <stdio.h>

// Calculating a subject average

int main(int argc, char*arg[]) {

    int g1, g2, g3;

    printf("What did you get for Algebra?\n> ");
    scanf("%d", &g1);

    printf("\nWhat did you get for Physics?\n> ");
    scanf("%d", &g2);

    printf("\nWhat did you get for Geometry?\n> ");
    scanf("%d", &g3);

    printf("The average score of all your grades is %d\n", (g1 + g2 + g3) / 3);

}