#include <stdio.h>
#include <stdlib.h>

int bubSort(int numbers[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char*argv[]) {
    int numbers[argc];
    int count = 0;
    
    for (int i = 0; i < argc; i++) {
        numbers[i] = atoi(argv[i]);
        count = count + 1;
    }
    bubSort(numbers, count);

    for (int i = 1; i < argc; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}