#include <stdio.h>
#include <string.h>

int main() {
    char first[6] = "False";
    char second[6] = "False";
    char third[6] = "False";
    char fail[6] = "False";

    int score;
    scanf("%d", &score);

    if (score >= 70) {
        strcpy(first, "True");
    } else if (score >= 50) {
        strcpy(second, "True");
    } else if (score >= 40) {
        strcpy(third, "True");
    } else if (score >= 0) {
        strcpy(fail, "True");
    }
    printf("first: %s\n", first);
    printf("second: %s\n", second);
    printf("third: %s\n", third);
    printf("fail: %s\n", fail);

    return 0;
}
