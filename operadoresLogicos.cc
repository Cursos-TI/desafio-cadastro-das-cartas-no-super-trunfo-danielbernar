#include <stdio.h>

int main() {
    int numero;

    printf ("Digite um numero:");
    scanf ("%d", &numero);

    if (numero > 0) {
        if (numero %2 == 0) {
            printf ("numero par \n");
        } else {
            printf ("numero impar");
        }

        printf(" positivo");
    } else if (numero == 0) {

    } else
    printf ("numero e negativo");

    return 0;
}