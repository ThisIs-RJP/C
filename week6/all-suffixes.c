#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    scanf(" %[^\n]s", word);

    for (int i = 0; i < strlen(word); i = i + 1) {
        printf("%s\n", &word[i]);
    }

    return 0;
}