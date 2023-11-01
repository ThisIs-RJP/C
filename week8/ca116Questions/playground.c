#include <stdio.h>
#include <string.h>

int main() {
    char sentence[50] = "The KMS Bismarck";

    if (strstr(sentence, "Bismarck")) {
        printf("Bismarck found in sentence\n%s\n", sentence);
    }

    return 0;
}
