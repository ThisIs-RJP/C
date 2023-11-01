#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int numbers[50];
    char num[5];
    int i = 0;
    int addNum;

    scanf("%s", num);

    while (strcmp(num, "end") != 0) {
        numbers[i] = atoi(num);
        scanf("%s", num); 
        i = i + 1;
    }
    
    scanf("%d", &addNum);

    for (int j = 0; j < i; j = j + 1) {
        printf("%d\n", numbers[j] + addNum);
    }

    return 0;
}
