#include <stdio.h>

int main() {
    char letra;
    printf("entre com uma letra minuscula:\n");
    scanf(" %c", &letra);
    letra = ('A' + 'a');
    printf("caractere = %c\n", letra);

    return 0;
}