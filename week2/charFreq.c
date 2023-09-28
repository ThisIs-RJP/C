#include <stdio.h>
#include <string.h>


void freq(char c, char* seenA[], const char* content) {
    int count = 0
    for (int j = 0; j < strlen(content); j++) {
        for (int k = 0; k < 26; k++) {
            if (seenA[k] != "\0") {
                if (content[j] != seenA[k]) {
                    count = count + 1;
                }
            }
        }
    }
}
int main(int argc, char*argv[]) {
    char seen[26];

    for (int i = 0; i < argc - 1; i++) {
        // get each letter of the argv and start counting
    }
}
// // void freq(const char*content, char* chars[], int counts[]) {
// //     for (int i = 0; i < strlen(content); i++) {
// //         for (int j = 0; j < 26; j++ ) {
// //             if (chars[j] != "\0") {
// //                 if (content[i] == chars[j]) {
// //                     counts[j] = counts[j] + 1;
// //                     break;
// //                 } else {
// //                     chars[j] = content[i];
// //                     counts[i] = 1;
// //                     break;
// //                 }
// //             }

// //         }
// //     }

// // }

// // int main(int argc, char*argv[]) {
// //     char charcs[26];
// //     int numbers[26];
// //     char *str = argv[1];

// //     freq(str, &charcs, numbers);

// //     for (int i = 1; i < 26; i++) {
// //         if (charcs[i] != "\0") {
// //             printf("%c %d\n", charcs[i], numbers[i]);
// //         }
// //     }
// //     return 0;
// // }

// #include <stdio.h>
// #include <string.h>

// void freq(const char *content, char chars[], int counts[]) {
//     for (int i = 0; i < strlen(content); i++) {
//         for (int j = 0; j < 26; j++) {
//             if (chars[j] != '\0') {
//                 if (content[i] == chars[j]) {
//                     counts[j] = counts[j] + 1;
//                     break; // Character found, no need to continue searching
//                 } 
//             } else {
//                 chars[j] = content[i];
//                 counts[j] = 1;
//                 break; // Character added, no need to continue searching
//             }
//         }
//     }
// }

// int main(int argc, char *argv[]) {
//     if (argc != 2) {
//         printf("Usage: %s <string>\n", argv[0]);
//         return 1;
//     }

//     char charcs[26];
//     int numbers[26] = {0};
//     char *str = argv[1];

//     freq(str, charcs, numbers);

//     for (int i = 0; i < 26; i++) {
//         if (charcs[i] != '\0') {
//             printf("%c %d\n", charcs[i], numbers[i]);
//         }
//     }

//     return 0;
// }



