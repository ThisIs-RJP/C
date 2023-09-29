#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    int total = n;
    for (int i = n - 1; i > 0; i--) {
        total = total * i;
    }
    printf("%d\n", total);
}
int main(int argc, char*argv[]) {
    for (int i = 1; i < argc; i++) {
        factorial(atoi(argv[i]));
    }
    return 0;
}