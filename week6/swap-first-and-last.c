#include <stdio.h>
#include <string.h>

void firstLast(char *sentence) {
    char *ptr = sentence;
    char *first = sentence;
    char *ptrLast = sentence;
    ptrLast = ptrLast + strlen(sentence) - 1;
    printf("%c", *ptrLast);
    ptr = ptr + 1;
    for (int i = 0; i < strlen(sentence) - 2; i = i + 1) {
        printf("%c", *ptr);
        ptr = ptr + 1;
    }

    printf("%c\n", *first);

    // for (int i = 1;)
}

int main() {
    char word[50];
    scanf(" %[^\n]s", word);
    firstLast(word);
    
    return 0;
}