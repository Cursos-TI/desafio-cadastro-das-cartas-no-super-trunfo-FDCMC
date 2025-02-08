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
    int cidade_codigo;
    char cidade_nome [50];
    double cidade_populacao;
    float cidade_area;
    double cidade_pib;
    int cidade_pontosturisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Entrada de dados
    // Codigo da cidade
    printf("Insira o codigo da Cidade...\n");
    scanf("%d", &cidade_codigo);

    // Nome da cidade
    printf("Insira o nome da cidade...\n");
    scanf("%c", &cidade_nome);

    //Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidade_populacao);

    //Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%f", &cidade_area);

    //PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", cidade_pib);

    //Pontos turisticos da cidade
    printf("Insira a quantidade de pontos turisticos...\n");
    scanf("%d", &cidade_populacao);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibindo
    printf("Código da cidade: %d\n", cidade_codigo);
    printf("Nome da cidade: %c\n", cidade_nome);
    printf("Pupulação da cidade: %lf\n", cidade_populacao);
    printf("Área da cidade: %f\n", cidade_area);
    printf("PIB da cidade: %lf\n", cidade_pib);
    printf("Quantidade de pontos turisticos: %d.", cidade_pontosturisticos);

    return 0;
}
