#include <stdio.h>
#include <string.h>

int Palindrome(const char*content) {
    char word[strlen(content)];
    char rev[strlen(content)];
    char ch;
    rev[0] = '\0';

    for (int j = 0; j < strlen(content) + 1; j++) {
        ch = content[strlen(content) - j];
        strncat(rev, &ch, 1);
    }
    if (strcmp(content, rev) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
}

int main(int argc, char*argv[]) {
    for (int i = 1; i < argc; i++) {
        Palindrome(argv[i]);
    }
    return 0;
}