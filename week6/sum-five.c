#include <stdio.h>

int main() {
    int nums[5];
    int num;
    int sum = 0;

    for (int i = 0; i < 5; i = i + 1) {
        scanf("%d", &num);
        nums[i] = num;
    }

    int *ptr = nums;

    for (int i = 0; i < 5; i = i + 1) {
        sum = sum + *ptr;
        ptr = ptr + 1;
    }
    printf("%d\n", sum);
    
    return 0;
}