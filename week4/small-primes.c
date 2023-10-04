#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 2 || n == 3) {
        printf("Prime\n");
    } else if (n % 2 == 0 || n % 3 == 0 || n == 1) {
        printf("Not prime\n");
    } else {
        printf("Prime\n");
    }
    return 0;
}
