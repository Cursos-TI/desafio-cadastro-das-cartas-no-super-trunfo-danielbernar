#include <stdio.h>

int main() {
    int signedNumber = 3000000000;
    // Este valor excede o limite de um int normal
    unsigned int unsignedNumber = 3000000000;

    printf ("Numero com sinal: %d \n", signedNumber);
    printf("Numero sem sinal:  %u \n", unsignedNumber);

    return 0;

}