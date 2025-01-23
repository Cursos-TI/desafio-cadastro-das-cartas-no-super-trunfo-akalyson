#include <stdio.h>

int main(){
    char estado;
    char codigo[20];
    char nome[20];
    int populacao;
    float area;
    float pib; 
    int npt;

    printf("Digite o estado:\n");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta:\n");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade em kilometros quadrados:\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhoes:\n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%i", &npt);

    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("Populacao: %i\n", populacao);
    printf("Area: %.2f kilometros quadrado\n", area);
    printf("PIB: %.2f Bilhoes de reais\n", pib);
    printf("Numero de pontos turisticos: %i\n", npt);

    return 0;

}