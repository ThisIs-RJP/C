#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *name;
    int id;
    float avgScore;
} Student;

void output(Student *data) {
    printf("Students name is %s\n", data->name);
    printf("Students ID is %d\n", data->id);
    printf("Average Score: %.2f\n", data->avgScore);
}

void readInfo(int argc, char* argv[]) {
    Student *studentList[(argc - 1) / 8]; // <-- The array to store all of the students data

    int j = 0;
    int index;
    float average = 0; // Initialising an average value
 
    for (int i = 1; i < argc; i = i + 8) {
        index = i + 2; // <-- Setting to +2 because the first index of that "set" is the name, the second is the ID
        // We then go into a for loop to loop 6 times to read the module score, since each person will have 6 scores anyway
        for (int k = 0; k < 6; k = k + 1) {
            average = average + atof(argv[index]);
            index = index + 1;
        }

        Student data = {argv[i], atoi(argv[i + 1]), (average/6)};
        studentList[j] = &data; // Pointer stuff

        output(&data);
        average = 0;
        
        if (i != argc - 8) { // <-- Just making sure that were not working with the last element, if we are, dont print a new line
            printf("\n");
        }
    }
}
int main(int argc, char* argv[]) {

    readInfo(argc, argv);
    return 0;
}