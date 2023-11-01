#include <stdio.h>
#include <string.h>

int main() {
    char word[50];
    char words[50][50];
    int i = 0;
    int count = 0;
    scanf(" %[^\n]", word);

    while (strcmp(word, "end") != 0) {
        strcpy(words[i], word);
        scanf(" %[^\n]", word);
        i = i + 1;
        count = count + 1;
    }

    for (int j = 0; j < count; j = j + 1) {
        printf("%d %d %s\n", j, count, words[j]);
    }

    return 0;
}