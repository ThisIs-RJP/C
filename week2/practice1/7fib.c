#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
    int a = 1;
    int b = 0;
    int c = 0;
    while (c < n) {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
    }
}
int main(int argc, char*argv[]) {
    fib(atoi(argv[1]));
    return 0;
}