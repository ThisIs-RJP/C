#include <stdio.h>
#include <ctype.h>


// Code to calculate the area/perimeter of a square/rectangle

int main(int argc, char*argv[]) {
    int num1, num2;
    char userIn;

    printf("Enter a value for the length of a rectangle\n> ");
    scanf("%d", &num1);

    printf("\nEnter a value for the width of a rectangle\n> ");
    scanf("%d", &num2);

    printf("\nWould you like to find the area or perimeter\nType A for perimeter or P for Perimeter\n> ");

    scanf(" %c", &userIn);
    /*

    I learned that from programming C  its very important to specify what youre looking for
    At the above line, when reading user input, i came across a problem in my code when reading a SINGLE letter from user input
    If you dont specify that the code youre using is specifically looking for a character, and then
    give it something that ISNT a character itll cause the program to fail,
    in my case, the variable num1 reassigned itself to 0 for no reason at all.
    Previously my code was
    scanf("%s", &userIn); <--- looking for a string
    Thinking that it shouldnt cause the code to misbehave, clearly I was wrong

*/
    if (tolower(userIn) == 'a') {
        printf("%s %d", "The area of the rectangle is", num1 * num2);
        printf("\n");
    }

    else {
        printf("%s %d", "The perimeter of the rectangle is ", (num1 * 2) + (num2 * 2));
        printf("\n");
    }
}