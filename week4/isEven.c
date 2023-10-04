#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main() {

    int even;
    scanf("%d", &even);

    int evenOrNot = (even / 2) * 2;
    if (even == evenOrNot) {
        printf("Even %d\n", evenOrNot);
    } else {
        printf("Not even %d\n", evenOrNot);
    }
    return 0;
}
