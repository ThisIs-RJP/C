#include <stdio.h>
#include <string.h>

void printVer(char *word) {
    char *ptr = word;

    for (int i = 0; i < strlen(word); i = i + 1) {
        printf("%c\n", *ptr);
        ptr = ptr + 1;
    }
}

int main() {
    char word[100];
    scanf(" %[^\n]s", word);
    printVer(word);

    return 0;
}