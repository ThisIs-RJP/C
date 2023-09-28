#include <stdio.h>
#include <string.h>
// You can edit the string there, the string is "level"
int main(int argc, char*argv[]) {
    char foo[30] = "level" , rev[30] = "";
    char ch;
    for (int i = 1; i <= strlen(foo); i++) {
        ch = foo[strlen(foo) - (i)];
        strncat(rev, &ch, 1);
        //strcat(rev, &ch); // This doesnt work because it changes the way the data is being stored
        // This causes the data to not be the same with each other, even though the output says otherwise
    }
    if ((strcmp(rev, foo)) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome!\n");
    }
    return 0;
}

// Look at line 9 and line 10, i uncommented line 10 and commented line 9
// run the code and see what it does