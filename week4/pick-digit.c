#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    char* num = argv[1];
    int pos;
    scanf("%d", &pos);
    printf("%c\n", num[strlen(num) - (pos + 1)]);
    return 0;
}
