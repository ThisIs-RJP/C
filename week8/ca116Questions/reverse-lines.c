#include <stdio.h>
#include <string.h>

int main() {
    char sentences[50][100];
    char sentence[50];
    int i = 0;

    char (*s)[100] = sentences;

    scanf(" %[^\n]", sentence);

    while (strcmp(sentence, "end") != 0) {
        strcpy(sentences[i], sentence);
        i = i + 1;
        scanf(" %[^\n]", sentence);
    }
    s = s + i - 1;
    for (int j = 0; j < i; j = j + 1) {
        printf("%s\n", *(s));
        s = s - 1;
    }
    return 0;
}