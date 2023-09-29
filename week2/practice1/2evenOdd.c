#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void evenOdd(int num) {
    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
}
int main(int argc, char*argv[]) {
    for (int i = 1; i < argc; i++) {
        evenOdd(atoi(argv[i]));
    }
    return 0;
}