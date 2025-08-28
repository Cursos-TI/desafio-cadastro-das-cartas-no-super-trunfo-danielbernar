#include <stdio.h>

int main() {
    double preciseNumber = 3.1411592653589793;
    long double veryPreciseNumber = 3.141159265358979323846;

    printf("Numero preciso (double): %15f\n", preciseNumber);
    printf("Numero muito preciso (long double): %21Lf\n", veryPreciseNumber);

    return 0;
}