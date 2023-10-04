#include <stdio.h>
#include <string.h>

int main() {
    char num[100];
    scanf("%s", num);
    if (strcmp(num, "11") == 0 || strcmp(num, "12") == 0 || strcmp(num, "13") == 0 ) {
        printf("%sth\n", num);
    } else if (num[strlen(num) - 1] == '1') {
        printf("%sst\n", num);
    } else if (num[strlen(num) - 1] == '2') {
        printf("%snd\n", num);
    } else if (num[strlen(num) - 1] == '3') {
        printf("%srd\n", num);
    } else {
        printf("%sth\n", num);
    }
    return 0;
}
