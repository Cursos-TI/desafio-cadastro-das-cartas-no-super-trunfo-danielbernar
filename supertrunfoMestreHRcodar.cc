#include <stdio.h>

int main() {
    // Declarar Variaveis Produtos, u i estoque, double valor unitario

    // u i quantidade minima
    char produtoA [30] = "Produto A";
    char produtoB [30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float ValorA = 10.50;
    float ValorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double ValorTotalA;
    double ValorTotalB;

    int resultadoA, resultadoB;

    // Exibir as informações dos produtos
    printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoA, estoqueA, ValorA);
    printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoB, estoqueB, ValorB);

    // Comparações com valor minimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf(" O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf(" O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

    //Comparações entre os valores totais dos produtos
    ValorTotalA = estoqueA * ValorA;
    ValorTotalB = estoqueB * ValorB;
    printf(" O valor total de A (R$%.2f) e maior que o valor de B (R$%.2f)? %d\n", estoqueA * ValorA, estoqueB * ValorB);
        (estoqueA * ValorA) > (estoqueB * ValorB);

    return 0;

}