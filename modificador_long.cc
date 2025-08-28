#include <stdio.h>

int main() {
    int regularNumber = 2147483647;
    // Valor maximo de int
    long int bigNumber = 21477483647;

    printf ("numero regular (int): %d\n", regularNumber);
    printf("Numero grande (long int): %Ld\n", bigNumber);

    bigNumber = 2147483648;
    // valor maior que o maximo de int
    printf("Numero grande atualizado (long int): %Ld\n", bigNumber);

    return 0;

}