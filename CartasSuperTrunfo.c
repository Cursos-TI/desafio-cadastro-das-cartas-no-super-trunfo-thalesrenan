#include <stdio.h>

int main() {

    char state1;
    char code1[3];
    char cityName1[20];
    int population1 = 0;
    float area1 = 0.0;
    float pib1 = 0.0;
    int turismLocations1 = 0;

    char state2;
    char code2[3];
    char cityName2[20];
    int population2 = 0;
    float area2 = 0.0;
    float pib2 = 0.0;
    int turismLocations2 = 0;

    printf("Estado da primeira carta: ");
    scanf("%c", &state1);
    printf("Codigo da primeira carta: ");
    scanf("%s", code1);
    printf("Nome da cidade da primeira carta: ");
    scanf("%s", cityName1);
    printf("Populacao da primeira carta: ");
    scanf("%d", &population1);
    printf("Area da primeira carta: ");
    scanf("%f", &area1);
    printf("PIB da primeira carta: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos da primeira carta: ");
    scanf("%d", &turismLocations1);

    printf("Estado: %c\n", state1);
    printf("Codigo: %c%s\n", state1, code1);
    printf("Nome da cidade: %s\n", cityName1);
    printf("Populacao: %d\n", population1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", turismLocations1);

    printf("Estado da segunda carta: ");
    scanf(" %c", &state2);
    printf("Codigo da segunda carta: ");
    scanf("%s", code2);
    printf("Nome da cidade da segunda carta: ");
    scanf("%s", cityName2);
    printf("Populacao da segunda carta: ");
    scanf("%d", &population2);
    printf("Area da segunda carta: ");
    scanf("%f", &area2);
    printf("PIB da segunda carta: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos da segunda carta: ");
    scanf("%d", &turismLocations2);

    printf("Estado: %c\n", state2);
    printf("Codigo: %c%s\n", state2, code2);
    printf("Nome da cidade: %s\n", cityName2);
    printf("Populacao: %d\n", population2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", turismLocations2);

    return 0;
}

main();