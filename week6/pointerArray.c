#include <stdio.h>
#include <stdlib.h>

void printArray(int *nums, int *count) {
    int *ptr = nums;
    // printf("%p\n", nums); <- To print the memory address of nums
    for (int i = 0; i < *count; i = i + 1) {
        printf("%d\n", *ptr);
        ptr = ptr + 1;
    }
}

int main(int argc, char* argv[]) {
    int nums[argc - 1];
    int count = 0;
    for (int i = 1; i < argc; i++) {
        nums[i - 1] = atoi(argv[i]);
        count = count + 1;
        }

    // printf("%p\n", nums); <- To print the memory address of nums
    printArray(nums, &count);
    return 0;
}