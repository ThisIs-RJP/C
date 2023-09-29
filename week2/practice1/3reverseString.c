#include <stdio.h>
#include <string.h>

int main(int argc, char*argv[]) {
    for (int i = 1; i <= strlen(argv[1]); i++) {
        printf("%c", argv[1][strlen(argv[1]) - i]);
    }
    printf("\n");
    return 0;
}