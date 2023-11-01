#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void grep(char sentences[50][50], char findWord[50], int count) {
    char (*s)[50] = sentences;
    for (int j = 0; j < count; j = j + 1) {
        if (strstr(*s, findWord)) {
            printf("%s\n", *s);
        }
        s = s + 1;
    }
}

int main(int argc, char* argv[]) {
    char sentences[50][50];
    char sentence[50];
    int i = 0;

    scanf(" %[^\n]", sentence);

    while (strcmp(sentence, "end") != 0) {
        strcpy(sentences[i], sentence);
        scanf(" %[^\n]", sentence);
        i = i + 1;
    }
    grep(sentences, argv[1], i);

    return 0;
}