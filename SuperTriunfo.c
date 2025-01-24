#include <stdio.h>

int main(){
    char estado01, estado02;
    char codigo01[10], codigo02[10]; 
    char nome01[20], nome02[20];
    unsigned int populacao01, populacao02;
    float area01, area02;
    float pib01, pib02;
    int npt01, npt02;
    float pibpc01, pibpc02;
    float dp01, dp02;
    double sp01, sp02;
//entrada de dados
    printf("Digite o estado da primeira cidade: (Uma letra)\n");
    scanf(" %c", &estado01);

    printf("Digite o codigo da primeira carta: (Um numero e duas letras)\n");
    scanf(" %s", codigo01);

    printf("Digite o nome da primeira cidade:\n");
    scanf(" %[^\n]", nome01);

    printf("Digite a populacao da primeira cidade:\n");
    scanf("%u", &populacao01);

    printf("Digite a area da primeira cidade em kilometros quadrados:\n");
    scanf("%f", &area01);

    printf("Digite o PIB da primeira cidade em bilhoes:\n");
    scanf("%f", &pib01);

    printf("Digite o numero de pontos turisticos da primeira cidade:\n");
    scanf("%i", &npt01);
//segunda cidade
    printf("Digite o estado da segunda cidade: (Uma letra)\n");
    scanf(" %c", &estado02);

    printf("Digite o codigo da segunda carta: (Um numero e duas letras)\n");
    scanf(" %s", codigo02);

    printf("Digite o nome da segunda cidade:\n");
    scanf(" %[^\n]", nome02);

    printf("Digite a populacao da segunda cidade:\n");
    scanf("%u", &populacao02);

    printf("Digite a area da segunda cidade em kilometros quadrados:\n");
    scanf("%f", &area02);

    printf("Digite o PIB da segunda cidade em bilhoes:\n");
    scanf("%f", &pib02);

    printf("Digite o numero de pontos turisticos da segunda cidade:\n");
    scanf("%i", &npt02);
//calculos de densidade populacional pib per capira
//calculos do super poder 
    dp01 = (float) (populacao01 / area01);
    dp02 = (float) (populacao02 / area02);
    pibpc01 = (double) (1000.0 * pib01) / populacao01;
    pibpc01 = pibpc01 * 1000000;
    pibpc02 = (double) (1000.0 * pib02) / populacao02;
    pibpc02 = pibpc02 * 1000000;
    sp01 = (double) ((populacao01 / 1000) + (area01 * 10) + dp01 + (pib01 * 10) + (pibpc01 / 10 )+ (npt01 * 1000)) / 10;
    sp02 = (double) ((populacao02 / 1000) + (area02 * 10) + dp02 + (pib02 * 10) + (pibpc02 / 10 )+ (npt02 * 1000)) / 10;

//exibir informacoes
    printf("\n--- Informacoes da Primeira Cidade ---\n");
    printf("Estado: %c\n", estado01);
    printf("Codigo: %s\n", codigo01);
    printf("Nome: %s\n", nome01);
    printf("Populacao: %u\n", populacao01);
    printf("Area: %.2f kilometros quadrados\n", area01);
    printf("Densidade Populacional: %.2f pessoas/km quadrado\n", dp01);
    printf("PIB: %.2f Bilhoes de reais\n", pib01);
    printf("PIB per Capita: %.2f reais\n", pibpc01);
    printf("Numero de pontos turisticos: %i\n", npt01);
    printf("Super Poder: %.0f", sp01);
//segunda cidade
    printf("\n--- Informacoes da Segunda Cidade ---\n");
    printf("Estado: %c\n", estado02);
    printf("Codigo: %s\n", codigo02);
    printf("Nome: %s\n", nome02);
    printf("Populacao: %u\n", populacao02);
    printf("Area: %.2f kilometros quadrados\n", area02);
    printf("Densidade Populacional: %.2f pessoas/km quadrado\n", dp02);
    printf("PIB: %.2f Bilhoes de reais\n", pib02);
    printf("PIB per Capita: %.2f reais\n", pibpc02);
    printf("Numero de pontos turisticos: %i\n", npt02);
    printf("Super Poder: %.0f\n", sp02);
//sistema que determina a carta vencedora
    int carta;
    if(populacao01 > populacao02){
        carta++;
    }
    else{
        carta--;
    }

    if(area01 > area02){
        carta++;
    }
    else{
        carta--;
    }

    if(dp01 < dp02){
        carta++;
    }
    else{
        carta--;
    }

    if(pib01 > pib02){
        carta++;
    }
    else{
        carta--;
    }
    if(pibpc01 > pibpc02){
        carta++;
    }
    else{
        carta--;
    }
    if(npt01 > npt02){
        carta++;
    }
    else{
        carta--;
    }
    if(sp01 > sp02){
        carta++;
    }
    else{
        carta--;
    }

    printf("---------------------------------------------\n");
    if(carta > 0){
        printf("A Primeira Carta, %s e a Vencedora\n", nome01);
    }
    else{
        printf("A Segunda Carta, %s e a Vencedora\n", nome02);
    }
    printf("---------------------------------------------\n");

    return 0;

}