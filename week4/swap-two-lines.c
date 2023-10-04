#include <stdio.h>

int main() {
    char sentence[100];
    char sentence2[100];

    scanf(" %[^\n]", sentence);
    scanf(" %[^\n]", sentence2);

    printf("%s\n", sentence2);
    printf("%s\n", sentence);

    return 0;
}
