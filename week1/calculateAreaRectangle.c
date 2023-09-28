#include <stdio.h>

int main(int argc, char*argv[]){
    int width, height;

    printf("Enter the width: ");
    scanf("%d", &width);
    printf("Enter the width: ");
    scanf("%d", &height);

    int area = width * height;

    if (width >= 0) {

        printf("%s %d", "The area of the rectangle is", width * height);
    }

    printf("\n");
}