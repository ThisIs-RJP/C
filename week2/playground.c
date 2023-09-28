#include <stdio.h>
#include <string.h>

void freq(const char* inputString) {
    int charCount[128] = {0}; // Considering ASCII, storing the character in a unique spot in the array
    for (int i = 0; i < strlen(inputString); i++) {
        if (charCount[inputString[i]] == 0) { // storing this charcacter using the CHARACTERS VALUE in ASCII 
                                             //as the index of its own placement in the array
            int f = 0;
            for (int j = 0; j < strlen(inputString); j++) {
                if (inputString[j] == inputString[i]) {
                    f = f + 1;
                }
            }
            printf("Character '%c' appears %d times.\n", inputString[i], f);
            charCount[inputString[i]] = 1; // Makes sure that you wont output the same character twice
            // // Print the state of charCount after this iteration
            // printf("charCount after iteration %d:\n", i);
            // for (int k = 0; k < 128; k++) {
            //     if (charCount[k] > 0) {
            //         printf("charCount[%d] = %d\n", k, charCount[k]);
            //     }
            // }
        }
    }
}

int main(int argc, char*argv[]) {
   freq("This is the sentence");
   //  freq(argv[1]);
    return 0;
}

