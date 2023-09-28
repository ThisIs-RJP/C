#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    if (argc < 2) {
        printf("Invalid input!\n");
        return 1;
    } else {
        // float floatNum = atof(argv[0]);
        // int intNum = floatNum;
        printf("Float: %f and Integer: %d\n", atof(argv[1]), atoi(argv[1]));
    }
}