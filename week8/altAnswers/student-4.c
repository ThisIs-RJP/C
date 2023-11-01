#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *name;
    int id;
    float avgScore;
} Student;

void output(Student *data);
void findLowest(Student *sList, int count);
void findHighest(Student *sList, int count);
void readInfo(int argc, char* argv[]);

int main(int argc, char* argv[]) {
    readInfo(argc, argv);
    
    return 0;
}


void output(Student *data) {
    printf("Students name is %s\n", data->name);
    printf("Students ID is %d\n", data->id);
    printf("Average Score: %.2f\n", data->avgScore);
}

void findLowest(Student *sList, int count) {
    Student* lowest = sList;
    for (int i = 1; i < count; i = i + 1) {
        Student temp = sList[i];
        if(sList[i].avgScore < lowest->avgScore) {
            lowest = &sList[i];
        }
    }
    printf("The person who scored the lowest is %s\n", lowest->name);
}

void findHighest(Student *sList, int count) {
    Student* lowest = sList;
    for (int i = 1; i < count; i = i + 1) {
        Student temp = sList[i];
        if(sList[i].avgScore > lowest->avgScore) {
            lowest = &sList[i];
        }
    }
    output(lowest);

}

void readInfo(int argc, char* argv[]) {
    Student studentList[(argc - 1) / 8]; // <-- The array to store all of the students data
    int j = 0;
    int index;
    float average = 0; // Initialising an average value
    float totalAvg = 0;
 
    for (int i = 1; i < argc; i = i + 8) {
        index = i + 2; // <-- Setting to +2 because the first index of that "set" is the name, the second is the ID
        // We then go into a for loop to loop 6 times to read the module score, since each person will have 6 scores anyway
        for (int k = 0; k < 6; k = k + 1) {
            average = average + atof(argv[index]);
            index = index + 1;
        }

        Student data = {argv[i], atoi(argv[i + 1]), (average/6)};
        studentList[j] = data;
        totalAvg = totalAvg + (average / 6);
        average = 0;
        j = j + 1;

    }
    for (int k = 0; k < j; k = k + 1) {
        output(&studentList[k]);
        if (k != j - 1) {
            printf("\n");
        }
    }
    findHighest(studentList, j);
    printf("\n------\n");
    printf("The average of all students is %.2f\n", totalAvg / j);
    findLowest(studentList, j);
}