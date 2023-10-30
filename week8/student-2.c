#include <stdio.h>
#include <stdlib.h>

struct studentInfo {
    char *sName;
    int age;
    int id;
    double height;
    int score;
};

void output(struct studentInfo info) {
    printf("Students name is %s\n", info.sName);
    printf("Students age is %d\n", info.age);
    printf("Students ID is %d\n", info.id);
    printf("Students height is %.2f\n", info.height);
    printf("Average Score %.2d\n", info.score / 5);
}

int main(int argc, char* argv[]) {
    int marks;
    int total = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks);
        total = total + marks;
    }

    struct studentInfo data = {argv[1], atoi(argv[2]), atoi(argv[3]), atof(argv[4]), total};
    output(data);

    return 0;
}