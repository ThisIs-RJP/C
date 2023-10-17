#include <stdio.h>
#include <string.h>

void countUpperLower(char *sentence) {
    char *ptr = sentence;
    int upperCount = 0;
    int lowerCount = 0;

    for (int i = 0; i < strlen(sentence); i = i + 1) {
        if (*ptr >= 'A' && *ptr <= 'Z') {
            upperCount = upperCount + 1;
        } else if (*ptr >= 'a' && *ptr <= 'z') {
            lowerCount = lowerCount + 1;
        }

        ptr = ptr + 1;
    }

    printf("Your sentence was %s\n", sentence);
    printf("Number of uppercase letters %d\n", upperCount);
    printf("Number of lower letters %d\n", lowerCount);

}

int main() {
    char sentence[100];
    
    scanf(" %[^\n]s", sentence);

    // printf("%s\n", sentence);
    countUpperLower(sentence);

    return 0;
}