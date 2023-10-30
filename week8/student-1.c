#include <stdio.h>
#include <stdlib.h>

struct studentInfo {
    char *sName;
    int age;
    int id;
    double height;
};

void output(struct studentInfo info) {
    printf("Students name is %s\n", info.sName);
    printf("Students age is %d\n", info.age);
    printf("Students ID is %d\n", info.id);
    printf("Students height is %.2f\n", info.height);
}

int main(int argc, char* argv[]) {
    struct studentInfo data = {argv[1], atoi(argv[2]), atoi(argv[3]), atof(argv[4])};
    output(data);

    return 0;
}
