#include <stdio.h>
#include <stdlib.h>

struct studentInfo {
    char *name;
    int id;
    float avgScore;
};

void output(struct studentInfo data) {
    printf("Students name is %s\n", data.name);
    printf("Students ID is %d\n", data.id);
    printf("Average Score is %.2f%%\n", data.avgScore);
}

int main(int argc, char* argv[]) {

    int k = 1;
    int index;
    int arrayIndex = 0;
    float averageScores = 0;
    float average = 0;

    for (int i = 1; i < argc; i = i + 8) {
        index = i + 2;
        for (int j = 0; j < 6; j = j + 1) {
            average = average + atof(argv[index]);
            index = index + 1;
        }
        struct studentInfo data = {argv[i], atoi(argv[i + 1]), (average/6)};
        output(data);
        if (i != argc - 8) {
            printf("\n");
        }
        averageScores = averageScores + (average/6);
        average = 0;
        k = 1;
    }
    printf("\n------\n\n");
    printf("Average Score of all students is: %.2f%%\n", (averageScores / (argc / 8)));

    return 0;
}