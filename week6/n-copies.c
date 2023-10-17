#include <stdio.h>

char printWord(char *sentence, int *count) {
    for (int i = 0; i < *count; i = i + 1) {
        if (i == *count - 1) {
            printf("%s\n", sentence);
        } else {
            printf("%s", sentence);
        }
    }
}

int main() {
    char word[100];
    int n;

    scanf(" %[^\n]s", word);
    scanf("%d", &n);
    if (!n) {
        printf("\n");
    } else {
        printWord(word, &n);
    }

    return 0;
}