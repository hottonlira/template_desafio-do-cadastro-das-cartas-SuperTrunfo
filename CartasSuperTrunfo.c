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

    int               opcao; 

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

    // === Menu interativo (Requisito 1) ===

    printf("\n--- Escolha o atributo para comparação ---\n");
    printf("1. populção\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha uma opção:\n");
    scanf(" %d", &opcao);

    printf("\n--- Resultado da comparação ---\n");


  // === Lógica de Comparação com Switch e If-Else (Requisitos 2 e 3) ===

    switch (opcao) {

    case 1: // População (Maior vence)
            printf("Atributo: População\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);
    if (populacao1 > populacao2) 
            printf("Vencedor: %s\n", cidade1);
    else if (populacao2 > populacao1) 
            printf("Vencedor: %s\n", cidade2);
    else    
            printf("Empate!\n");
    break;

    case 2: // Área (Maior vence)
            printf("Atributo: Área\n");
            printf("%s: %.2f km2\n", cidade1, area1);
            printf("%s: %.2f km2\n", cidade2, area2);
    if (area1 > area2) 
            printf("Vencedor: %s\n", cidade1);
    else if (area2 > area1) 
            printf("Vencedor: %s\n", cidade2);
    else 
            printf("Empate!\n");
            break;

    case 3: // PIB (Maior vence)
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
    if (pib1 > pib2) 
            printf("Vencedor: %s\n", cidade1);
    else if (pib2 > pib1) 
            printf("Vencedor: %s\n", cidade2);
    else 
            printf("Empate!\n");
            break;

    case 4: // Pontos Turísticos (Maior vence)
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", cidade1, pontosturisticos1);
            printf("%s: %d\n", cidade2, pontosturisticos2);
    if (pontosturisticos1 > pontosturisticos2) 
            printf("Vencedor: %s\n", cidade1);
    else if (pontosturisticos2 > pontosturisticos1) 
            printf("Vencedor: %s\n", cidade2);
    else 
            printf("Empate!\n");
            break;

    case 5: // Densidade Demográfica (Menor vence - Requisito 3)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km2\n", cidade1, densidade1);
            printf("%s: %.2f hab/km2\n", cidade2, densidade2);
    if (densidade1 < densidade2) 
            printf("Vencedor: %s\n", cidade1);
    else if (densidade2 < densidade1) 
            printf("Vencedor: %s\n", cidade2);
    else 
            printf("Empate!\n");
            break;

    default: // Segurança (Entrada inválida)
            printf("Opção inválida no menu.\n");
    }
      
return 0;
} 
