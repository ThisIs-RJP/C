#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int evenNumbers[50];
    int oddNumbers[50];
    char num[5];
    int evenIndex = 0;
    int oddIndex = 0;

    scanf("%s", num);

    while (strcmp(num, "end") != 0) {
        if (atoi(num) % 2 == 0) {
            evenNumbers[evenIndex] = atoi(num);
            evenIndex = evenIndex + 1; 
        }
        else {
            oddNumbers[oddIndex] = atoi(num);
            oddIndex = oddIndex + 1;
        }
        scanf("%s", num);
    }

    for (int i = 0; i < evenIndex; i = i + 1) {
        printf("%d\n", evenNumbers[i]);
    }

    for (int i = 0; i < oddIndex; i = i + 1) {
        printf("%d\n", oddNumbers[i]);
    }

    return 0;
}