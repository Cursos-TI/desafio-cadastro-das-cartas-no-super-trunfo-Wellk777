#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código implementa um sistema de cadastro de cartas de cidades para o jogo Super Trunfo.
// O programa já inclui os dados de São Paulo e Curitiba nas cartas e exibe de forma organizada.

int main() {
    // Definição das variáveis para a primeira carta (São Paulo)
    char estado1 = 'A';
    char nome_estado1[30] = "São Paulo"; // Nome completo do estado
    char codigo1[4] = "A01"; // Array para armazenar o código
    char nome_cidade1[50] = "São Paulo"; // Array para armazenar o nome da cidade
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos_turisticos1 = 50;
    
    // Definição das variáveis para a segunda carta (Curitiba)
    char estado2 = 'B';
    char nome_estado2[30] = "Paraná"; // Nome completo do estado
    char codigo2[4] = "B02";
    char nome_cidade2[50] = "Curitiba";
    int populacao2 = 1948626;
    float area2 = 434.89;
    float pib2 = 87.15;
    int pontos_turisticos2 = 40;
    
    // Exibição dos dados das cartas com formatação visual aprimorada
    printf("\n+----------------------------------+\n");
    printf("|           SUPER TRUNFO           |\n");
    printf("|         CARTAS DE CIDADES        |\n");
    printf("+----------------------------------+\n\n");
    
    // Exibição dos dados da primeira carta (São Paulo)
    printf("+----------------------------------+\n");
    printf("|            CARTA 1               |\n");
    printf("+----------------------------------+\n");
    printf("| Estado (código): %-15c |\n", estado1);
    printf("| Nome do Estado: %-16s |\n", nome_estado1);
    printf("| Código da Carta: %-15s |\n", codigo1);
    printf("| Nome da Cidade: %-16s |\n", nome_cidade1);
    printf("| População: %-20d |\n", populacao1);
    printf("| Área: %-24.2f |\n", area1);
    printf("| PIB: %-26.2f |\n", pib1);
    printf("| Pontos Turísticos: %-14d |\n", pontos_turisticos1);
    printf("+----------------------------------+\n\n");
    
    // Exibição dos dados da segunda carta (Curitiba)
    printf("+----------------------------------+\n");
    printf("|            CARTA 2               |\n");
    printf("+----------------------------------+\n");
    printf("| Estado (código): %-15c |\n", estado2);
    printf("| Nome do Estado: %-16s |\n", nome_estado2);
    printf("| Código da Carta: %-15s |\n", codigo2);
    printf("| Nome da Cidade: %-16s |\n", nome_cidade2);
    printf("| População: %-20d |\n", populacao2);
    printf("| Área: %-24.2f |\n", area2);
    printf("| PIB: %-26.2f |\n", pib2);
    printf("| Pontos Turísticos: %-14d |\n", pontos_turisticos2);
    printf("+----------------------------------+\n\n");
    
    printf("Jogo Super Trunfo de Cidades - Desenvolvido para o Desafio\n");
    
    return 0;
}

