#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *name;
    int age;
    int id;
    float height;
} Student;

void output(Student *data) {
    printf("Students name is %s\n", data->name);
    printf("Students age is %d\n", data->age);
    printf("Students ID is %d\n", data->id);
    printf("Students height is %.2f\n", data->height);
}

int main(int argc, char* argv[]) {
    Student student = {argv[1], atoi(argv[2]), atoi(argv[3]), atoi(argv[4])};
    Student *ptr = &student;

    // To create an array storing the amount of students
    Student *studentList[5];
    studentList[0] = &student;

    output(studentList[0]);

    return 0;
}
