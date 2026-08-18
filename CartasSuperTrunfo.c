#include <stdio.h>

int main() {


// Variáveis carta 1
char estado1;
char codigo1[4];
char cidade1[50];
unsigned long int populacao1;
float area1;
float pib1;
int pontosturisticos1;
float densidade1;
float percapita1;
float superpoder1; // Soma de todos os valores numéricos da carta com densidade populacional invertida

//Variáveis carta 2
char estado2;
char codigo2[4];
char cidade2[50];
unsigned long int populacao2;
float area2;
float pib2;
int pontosturisticos2;
float densidade2;
float percapita2;
float superpoder2;

//Variáveis para comparação
int população, area, pib, pontosturisticos, densidade, percapita, superpoder;


//Cadastro carta 1
printf("------Cadastro da Carta 1------\n");
printf("Estado (A-H): ");
scanf(" %c", &estado1);
printf("Código da carta (ex: A1): ");
scanf("%s", codigo1);
printf("Cidade: ");
scanf("%s", cidade1);
printf("Populacao: ");
scanf("%lu", &populacao1);
printf("Área em km²: ");
scanf("%f", &area1);
printf("PIB anual bilhões R$: ");
scanf("%f", &pib1);
printf("Pontos turísticos: ");
scanf("%d", &pontosturisticos1);

// Calcular densidade e per capita após entrada dados usuário
densidade1 = (float) populacao1 / area1;
percapita1 =  pib1 * 1000000 / (float) populacao1; //multiplicado por 1 milhão para sair dos dígitos do bilhão no resultado

//Cadastro carta 2
printf("------Cadastro da Carta 2------\n");
printf("Estado (A-H): ");
scanf(" %c", &estado2);
printf("Código da carta (ex: B2): ");
scanf("%s", codigo2);
printf("Cidade: ");
scanf("%s", cidade2);
printf("Populacao: ");
scanf("%lu", &populacao2);
printf("Área em km²: ");
scanf("%f", &area2);
printf("PIB anual bilhões R$: ");
scanf("%f", &pib2);
printf("Pontos turísticos: ");
scanf("%d", &pontosturisticos2);

// Calcular densidade e per capita após entrada dados usuário
densidade2 = (float) populacao2 / area2;
percapita2 =  pib2 * 1000000 / (float) populacao2;


// resultado variável Super poder
superpoder1 = (float) populacao1 + area1 + (pib1 * 1000000000) + (float) pontosturisticos1 + percapita1 + (1.0f / densidade1);
superpoder2 = (float) populacao2 + area2 + (pib2 * 1000000000) + (float) pontosturisticos2 + percapita2 + (1.0f / densidade2);

// Comparação entre atributos das cartas
população = populacao1 > populacao2;
area = area1 > area2;
pib = pib1 > pib2;
pontosturisticos = pontosturisticos1 > pontosturisticos2;
densidade = densidade1 < densidade2;
percapita = percapita1 > percapita2;
superpoder = superpoder1 > superpoder2;



// --- EXIBIÇÃO DA CARTA 1 ---
   printf("\n***********************\n");
   printf("Carta 1:\n");
   printf("Estado: %c\n", estado1);
   printf("Codigo: %s\n", codigo1);
   printf("Cidade: %s\n", cidade1);
   printf("Populacao: %lu\n", populacao1);
   printf("Area: %.f km2\n", area1);
   printf("PIB: %.f bilhoes de reais\n", pib1);
   printf("Pontos Turisticos: %d\n", pontosturisticos1);
   printf("Densidade Populacional: %.f habitantes por km²\n", densidade1);
   printf("PIB per capita: %.3f reais\n", percapita1);
   printf("Super Poder: %.2f\n", superpoder1);

    // --- EXIBIÇÃO DA CARTA 2 ---
    printf("\n***********************\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.f km2\n", area2);
    printf("PIB: %.f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.f habitantes por km²\n", densidade2);
    printf("PIB per capita: %.3f reais\n", percapita2);
    printf("Super Poder: %.2f\n", superpoder2);
    printf("====================\n");

    //Exibição resultado comparações entre cartas e Super poder

    printf("**************Resultados da comparação entre as cartas*************\n");
    printf("Se o resultado for 1 venceu a Carta 1\n");
    printf("Se o resultado for 0 venceu a Carta 2\n");
    printf("======================================\n");
    printf("População: %d\n", população);
    printf("Área:%d\n", area);
    printf("PIB: %d\n", pib);
    printf("Pontos Turísticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %d\n", densidade);
    printf("PIB percapita: %d\n", percapita);
    printf("Super Poder: %d\n", superpoder);
    printf("******************\n");






return 0;

}