#include <stdio.h>

int main () {
    
    char estado[100];
    char codigo_da_carta[100];
    char nome_da_cidade[100];
    int populacao_da_cidade;
    float area;
    float pib;
    int numero_de_pontos_turisticos;

    printf("Estado: \n");
    scanf("%s", estado);

    printf("Codigo da carta: \n");
    scanf("%s", codigo_da_carta);

    printf("Nome da cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("Populacao da cidade: \n");
    scanf("%d", &populacao_da_cidade);

    printf("Area (em km²): \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    return 0;
}