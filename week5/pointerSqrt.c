#include <stdio.h>
#include <math.h>

int main() {
    double num = 9;
    double *ptr = &num;
    double numSRT = sqrt(num);
    double *ptr2 = &numSRT;
    *ptr = *ptr2;
    printf("%2.f\n", *ptr);
    return 0; 
}