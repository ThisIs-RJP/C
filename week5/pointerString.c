#include <stdio.h>
#include <string.h>
int main() {
    char *word = "dog";
    char *ptr = word;

    for (int i = 0; i < strlen(word); i++) {
        printf("Character: %c\n", *ptr);
        ptr = ptr + 1;
    }
    return 0;
}