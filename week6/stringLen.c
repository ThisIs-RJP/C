#include <stdio.h>

int strLen(char *name) {
    char *ptr = name;
    int count = 0;
    while (*ptr != '\0') {
        ptr = ptr + 1;
        count = count + 1;
    }
    return count;
}

int main() {
    char name[100];
    scanf(" %[^\n]s", name);
    
    printf("%d\n", strLen(name));

    return 0;
}