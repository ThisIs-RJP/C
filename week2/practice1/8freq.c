#include <stdio.h>
#include <string.h>
void freq(const char*content) {
    int f = 0;
    int charCount[128] = {0};
    for (int i = 0; i < strlen(content); i++) {
        if (charCount[content[i]] == 0) {
            for (int j = 0; j < strlen(content); j++) {
                if (content[j] == content[i]) {
                    f = f + 1;
                }
            }
            printf("Frequency of %c is %d\n", content[i], f);
            charCount[content[i]] = 1;
        }
        f = 0;
    }
}
int main(int argc, char*argv[]) {
    for (int k = 1; k < argc; k++) {
        freq(argv[1]);
        printf("\n");
    }

    return 0;
}