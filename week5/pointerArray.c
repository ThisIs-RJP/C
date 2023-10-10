#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers; 

    printf("Array elements using a pointer:\n");

    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *ptr);
        // printf("Element %d: %d\n", i, numbers[i]); // Without using pointers
        ptr = ptr + 1; 
    }
    return 0;
}