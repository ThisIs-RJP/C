// #include <stdio.h>

#include <stdio.h>

int prime(int n) {

    int prime = 1;
    for (int i = 2;  i < n; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }

    if (prime == 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a number\n> ");
    scanf("%d", &num);

    for (int j = 2; j <= num; j++) {
        if (prime(j)) {
            printf("%d ", j);
        }
    }
    printf("\n");
    return 0;
}