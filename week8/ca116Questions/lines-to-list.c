#include <stdio.h>
#include <string.h>

int main() {
    char words[50][50];
    char word[50];
    int i = 0;
    
    scanf(" %[^\n]", word);

    while (strcmp(word, "end") != 0) {
        strcpy(words[i], word);
        i = i + 1;
        scanf(" %[^\n]", word);

    }
    printf("[");
    for (int j = 0; j < i; j = j + 1) {
        printf("'%s'", words[j]);
        if (j != i - 1) {
            printf(", ");
        }
    }

    printf("]\n");
    return 0;
}