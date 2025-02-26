#include <stdio.h>

int main () {

    char cod2 [50];
    int pop1, pop2, tur1, tur2;
    char cod1 [50];
    char estado1 [99];
    char estado2 [99];
    float area1, area2, pib1, pib2;
    char cidade1 [50];
    char cidade2 [50];

    printf("Cadastramento de Cartas\n");
    printf("Primeira Carta\n");
    printf("Digite o nome de um estado: \n");
    scanf("%s", &estado1);
    printf("Digite um código para sua carta (ex:A01, B03): \n");
    scanf("%s", &cod1);
    printf("Digite o nome de uma cidade: \n");
    scanf("%s", &cidade1);
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &pop1);
    printf("Digite a Área da cidade (em km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos dessa cidade: \n");
    scanf("%d",&tur1);

    printf("Segunda Carta\n");
    printf("Digite o nome de um estado: \n");
    scanf("%s", &estado2);
    printf("Digite um código para sua carta (ex:A01, B03): \n");
    scanf("%s", &cod2);
    printf("Digite o nome de uma cidade: \n");
    scanf("%s", &cidade2);  
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &pop2);
    printf("Digite a Área da cidade (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos dessa cidade: \n");
    scanf("%d", &tur2);

    printf("Primeira Carta\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", tur1);

    printf("Segunda Carta\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", tur2);


















}