#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Declarando variaveis 
    // Carta 1 
    char carta1_estado;
    char carta1_codigo [5];
    char carta1_cidade[50];
    int carta1_populacao;
    float carta1_area;
    float carta1_pib;
    int carta1_pontosturisticos;

    // Carta 2 
    char carta2_estado;
    char carta2_codigo [5];
    char carta2_cidade[50];
    int carta2_populacao;
    float carta2_area;
    float carta2_pib;
    int carta2_pontosturisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Entrada de dados
    // Carta 1
    printf("Criando as Cartas do Super Trunfo \n");
    printf("Carta 1...\n");
    // Letra do estado
    printf("Digite a letra do estado de 'A' a 'H':\n");
    scanf("%c", &carta1_estado);
    // Código da carta
    printf("Digite o código da carta de 01 a 04:\n");
    scanf("%s", &carta1_codigo[0]);
    //Nome da cidade
    printf("Digite o nome da cidade:\n");
    scanf("%s", &carta1_cidade[0]);
    // População
    printf("Digite a população da cidade:\n");
    scanf("%d", &carta1_populacao);
    // Área
    printf("Digite a área da cidade:\n");
    scanf("%f", &carta1_area);
    // PIB
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &carta1_pib);
    // Número de pontos turísticos
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &carta1_pontosturisticos);
    //
    // Carta 2
    printf("Carta 2...\n");
    // Letra do estado
    printf("Digite a letra do estado de 'A' a 'H':\n");
    scanf(" %c", &carta2_estado);
    // Código da carta
    printf("Digite o código da carta de 01 a 04:\n");
    scanf("%s", &carta2_codigo[0]);
    //Nome da cidade
    printf("Digite o nome da cidade:\n");
    scanf("%s", &carta2_cidade[0]);
    // População
    printf("Digite a população da cidade:\n");
    scanf("%d", &carta2_populacao);
    // Área
    printf("Digite a área da cidade:\n");
    scanf("%f", &carta2_area);
    // PIB
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &carta2_pib);
    // Número de pontos turísticos
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &carta2_pontosturisticos);
  
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibindo
    // Carta 1
    printf("Exibindo sas cartas cadastradas\n");
    printf("Carta 1...\n");
    printf("Estado: %c\n", carta1_estado);
    printf("Codigo: %c%s\n", carta1_estado, carta1_codigo);
    printf("Cidade: %s\n", carta1_cidade);
    printf("População: %d\n", carta1_populacao);
    printf("Área: %f\n", carta1_area);
    printf("PIB: %f\n", carta1_pib);
    printf("Pontos Turísticos: %d\n", carta1_pontosturisticos);
    
    // Carta 2
    printf("Carta 2...\n");
    printf("Estado: %c\n", carta2_estado);
    printf("Codigo: %c%s\n", carta2_estado, carta2_codigo);
    printf("Cidade: %s\n", carta2_cidade);
    printf("População: %d\n", carta2_populacao);
    printf("Área: %f\n", carta2_area);
    printf("PIB: %f\n", carta2_pib);
    printf("Pontos Turísticos: %d\n", carta2_pontosturisticos);

    // Retorno
    return 0;
}
