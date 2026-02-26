#include <stdio.h>

// Desenvolvendo a lógica do jogo

// Comparar duas cartas e determinar a vencedora com base em um atributo.

int main() {
  
    // === Carta 1 ===
    
    char              estado1[3], codigo1[5], cidade1[50];
    unsigned long int populacao1;
    float             area1, pib1, densidade1, pibpercapita1;
    int               pontosturisticos1;

    // === Carta 2 ===

    char              estado2[3], codigo2[5], cidade2[50];
    unsigned long int populacao2;
    float             area2, pib2, densidade2, pibpercapita2;
    int               pontosturisticos2;

    // === Cadastro carta 1 ===

    printf("Cadastro da carta 1\n");
    printf("Estado (ex: SP):\n");
    scanf(" %s", estado1);
    printf("Código da carta (ex:A01):\n");
    scanf(" %s", codigo1);
    printf("Nome da cidade:\n");
    scanf(" %[^\n]", cidade1); 
    printf("População:\n");
    scanf(" %lu", &populacao1);
    printf("Área (km2):\n");
    scanf(" %f", &area1);
    printf("PIB (bilhões):\n");
    scanf(" %f", &pib1);
    printf("Pontos Turísticos:\n");
    scanf(" %d", &pontosturisticos1);

    // === Cálculos carta 1 ===

    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000.0) / (float)populacao1; 

    printf("\n");

    // === Cadastro carta 2 ===

    printf("Cadastro da carta 2\n");
    printf("Estado (ex: RJ):\n");
    scanf(" %s", estado2);
    printf("Código da carta (ex:B02):\n");
    scanf(" %s", codigo2);
    printf("Nome da cidade:\n");
    scanf(" %[^\n]", cidade2); 
    printf("População:\n");
    scanf(" %lu", &populacao2);
    printf("Área (km2):\n");
    scanf(" %f", &area2);
    printf("PIB (bilhões):\n");
    scanf(" %f", &pib2);
    printf("Pontos Turísticos:\n");
    scanf(" %d", &pontosturisticos2);

    // === Cálculos da carta 2 ===

    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / (float)populacao2;

    printf("\n");

    // === Lógica de comparação ===
   
    printf("\n--- Resultado da comparação (Atributo: Populção) ---\n");
    printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);

    // Regra: Para todos exceto densidade, o maior vence.

    if (populacao1 > populacao2) {
       
       printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);

    }
      else if (populacao2 > populacao1) {

        printf("Resultado: Empate!\n");

      }


      if (densidade1 < densidade2){

        printf("Carta 1 venceu por menor densidade!");

      }
      
return 0;
} 
