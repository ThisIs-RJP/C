#include <stdio.h>

int main(int argc, char*argv[]){

    for (int i = 0; i < lengthOfArray; i++) {
        for (int j = i + 1; j < lengthOfArray) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

/*
    The Code essentially loops through the same loop and
    compares the numbers to the one next to it,
    if it finds that its more than the next number, itll swap it up
    
*/