#include <stdio.h>
#include <stdlib.h>

int isPrime(int n) {
    int flag = 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    return flag;
}

int main(int argc, char*argv[]) {
    for (int i = 1; i < argc; i++) {
        if (isPrime(atoi(argv[i])) == 0) {
            printf("%d is a prime number\n", atoi(argv[i]));
        } else {
            printf("%d is not a prime number\n", atoi(argv[i]));
        }
    }
    return 0;
}
