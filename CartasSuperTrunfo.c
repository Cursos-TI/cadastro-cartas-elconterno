#include <stdio.h>

int main() {


// Variáveis carta 1
char estado1;
char codigo1[4];
char cidade1[50];
int populacao1;
float area1;
float pib1;
int pontosturisticos1;

//Variáveis carta 2
char estado2;
char codigo2[4];
char cidade2[50];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;


//Cadastro carta 1

printf("------Cadastro da Carta 1------\n");
printf("Estado (A-H): ");
scanf("%c", &estado1);
printf("Código da carta (ex: A1): ");
scanf("%s", codigo1);
printf("Cidade: ");
scanf("%s", cidade1);
printf("Populacao: ");
scanf("%d", &populacao1);
printf("Área em km²: ");
scanf("%f", &area1);
printf("PIB anual bilhões R$: ");
scanf("%f", &pib1);
printf("Pontos turísticos: ");
scanf("%d", &pontosturisticos1);




//Cadastro carta 2

printf("------Cadastro da Carta 2------\n");
printf("Estado (A-H): "); //Algum erro que não detectei nessa linha
scanf("%c", &estado2);
printf("Código da carta (ex: B2): ");
scanf("%s", codigo2);
printf("Cidade: ");
scanf("%s", cidade2);
printf("Populacao: ");
scanf("%d", &populacao2);
printf("Área em km²: ");
scanf("%f", &area2);
printf("PIB anual bilhões R$: ");
scanf("%f", &pib2);
printf("Pontos turísticos: ");
scanf("%d", &pontosturisticos2);

// --- EXIBIÇÃO DA CARTA 1 ---
    printf("\n====================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.f km2\n", area1);
    printf("PIB: %.f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    // --- EXIBIÇÃO DA CARTA 2 ---
    printf("\n====================\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.f km2\n", area2);
    printf("PIB: %.f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("====================\n");
return 0;

}
