#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("entre com temperatura:\n");
    scanf("%f", &temperatura);
    printf("entre com umidade:\n");
    scanf("%f", &umidade);
    printf("entre com estoque:\n");
    scanf("%u", &estoque);

    if (temperatura > 30) {
        printf("temperatura esta em alta\n");
    } else {
        printf("temperatura esta dentro do parametro\n");
    }
    if (umidade > 50) {
        printf("umidade elevada\n");
    } else {
        printf("umidade esta dentro do parametro\n");
    }
    if (estoque < estoqueMinimo) {
        printf("estoque abaixo do minimo!\n");
    } else {
        printf("estoque normal!\n");
    }

    return 0;
}