#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char*argv[]) {
    if (argc != 4) {
        printf("Not enough arguments!\n");
        return 1;
    } else if (atoi(argv[1]) < 1 || !isalpha(argv[2][0])) {
        printf("Invalid types!\n");
        return 1;
    } else {
        for (int i = 0; i < atoi(argv[1]); i++) {
            printf("%c", argv[2][0]);
        }
        int n = (int)(atof(argv[3]) < 0 ? (atof(argv[3]) - 0.5) : (atof(argv[3]) + 0.5));
        printf("\n%d\n", n);
    }
    return 0;
}
