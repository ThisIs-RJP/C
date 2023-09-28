#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    if (argc < 2) {
        printf("Invalid input!\n");
        return 1;
    } else {
        int num = atoi(argv[1]);

        for (int i = num - 1; i > 0; i--) {
            num = num * (i);
        }
        printf("%d\n", num);
    }
    return 0;
}