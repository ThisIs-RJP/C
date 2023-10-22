#include <stdio.h>

void higherLower(int nums[], int count) {
    int *ptrOld = nums;
    int *ptrNew = ptrOld + 1;
    int tmp;
    for (int i = 2; i < count; i = i + 1) {
        if (*ptrOld == *ptrNew) {
            printf("equal\n");
        }
        else if (*ptrNew > *ptrOld) {
            printf("higher\n");
        } 
        else if (*ptrNew < *ptrOld) {
            printf("lower\n");
        }
        ptrOld = ptrOld + 1;
        ptrNew = ptrNew + 1;
    }
}

int main() {
    int new;
    int old;
    int count = 0;
    int nums[7];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &new);
        nums[i] = new;
        count = count + 1;
    }

    higherLower(nums, count);
    return 0;
}
