#include <stdio.h>

// Calculating a subject average while giving comments based on average
int main(int argc, char*arg[]) {

    int g1, g2, g3, avgScore;

    printf("What did you get for Algebra?\n> ");
    scanf("%d", &g1);

    printf("\nWhat did you get for Physics?\n> ");
    scanf("%d", &g2);

    printf("\nWhat did you get for Geometry?\n> ");
    scanf("%d", &g3);

    // printf("The average score of all your grades is %d\n", (g1 + g2 + g3) / 3);

    avgScore = (g1 + g2 + g3) / 3;

    printf("Your average grade is %d\n", avgScore);

    if (avgScore >= 7) {
        printf("Good job!\n");
    }

    else if (avgScore >= 4) {
        printf("You need to work harder!\n");
    }

    else {
        printf("Failed, you really need to work harder!\n");
    }

}