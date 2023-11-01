#include <stdio.h>
#include <string.h>

int main() {
    char allWords[100] = "";
    char newWords[50][50];
    char words[50];

    int i = 0;
    char (*s)[50] = newWords;

    scanf(" %[^\n]", words);

    while (strcmp(words, "end") != 0) {
        if (!strstr(allWords, words)) {
            strcat(allWords, words);
            strcpy(newWords[i], words);
            i = i + 1;
        }
        scanf(" %[^\n]", words);
    }
    for (int j = 0; j < i; j = j + 1) {
        printf("%s\n", *(s + j));
    }

    return 0;
}