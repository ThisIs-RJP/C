#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseAndUppercase(char *sentence) {
    char *word;
    char *delimiter = " ";
    char *words[100];
    int wordCount = 0;
    word = strtok(sentence, delimiter);
    while (word != NULL) {
        words[wordCount++] = word;
        word = strtok(NULL, delimiter);
    }
    for (int i = wordCount - 1; i >= 0; i--) {
        int len = strlen(words[i]);
        for (int j = 0; j < len; j++) {
            words[i][j] = toupper(words[i][j]);
        }
        printf("%s", words[i]);
        if (i > 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Incorrect input!\n");
        return 1;
    }
    char *sentence = argv[1];
    reverseAndUppercase(sentence);

    return 0;
}
