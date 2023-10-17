#include <stdio.h>

void three(char *sentence) {
    for (int i = 0; i < 3; i = i + 1) {
        if (i == 2) {
            printf("%s\n", sentence);
        } else {
            printf("%s", sentence);
        }
    }
}

int main() {
    char word[100];

    scanf(" %[^\n]s", word);
    three(word);
    return 0;
}