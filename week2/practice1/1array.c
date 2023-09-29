#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    int numbers[argc - 1];
    int count = 0, total = 0;

    for (int i = 0; i < (argc); i++) {
        numbers[i] = atoi(argv[i]);
        count = count + 1;
    }
    for (int i = 1; i < count; i++) {
        total = total + numbers[i];
    }

    printf("%d\n", total);
    return 0;
}
