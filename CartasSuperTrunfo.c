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
    // Estado A = São Paulo
    // Cidade A01 = São Paulo
    char estadoA_nome[100] = "São Paulo";
    int cidadeA01_codigo = 1;
    char cidadeA01_nome[100]= "São Paulo";
    double cidadeA01_populacao;
    double cidadeA01_area;
    double cidadeA01_pib;
    int cidadeA01_pontosturisticos;

    // Cidade A02 = Campinas
    int cidadeA02_codigo = 2;
    char cidadeA02_nome[100] = "Campinas";
    double cidadeA02_populacao;
    double cidadeA02_area;
    double cidadeA02_pib;
    int cidadeA02_pontosturisticos;

    // Cidade A03 = Santos
    int cidadeA03_codigo = 3;
    char cidadeA03_nome[100] = "Santos";
    double cidadeA03_populacao;
    double cidadeA03_area;
    double cidadeA03_pib;
    int cidadeA03_pontosturisticos;

    // Cidade A04 = Guarulhos
    int cidadeA04_codigo = 4;
    char cidadeA04_nome[100] = "Guarulhos";
    double cidadeA04_populacao;
    double cidadeA04_area;
    double cidadeA04_pib;
    int cidadeA04_pontosturisticos;

    //Estado B = Rio de Janeiro
    //Cidade B01 = Rio de Janeiro
    char estadoB_nome[100] = "Rio de Janeiro";
    int cidadeB01_codigo = 2;
    char cidadeB01_nome[100] = "Rio de Janeiro";
    double cidadeB01_populacao;
    double cidadeB01_area;
    double cidadeB01_pib;
    int cidadeB01_pontosturisticos;

    //Cidade B02 = Niterói
    int cidadeB02_codigo = 2;
    char cidadeB02_nome[100] = "Niterói";
    double cidadeB02_populacao;
    double cidadeB02_area;
    double cidadeB02_pib;
    int cidadeB02_pontosturisticos;

    //Cidade B03 = Petrópolis
    int cidadeB03_codigo = 3;
    char cidadeB03_nome[100] = "Petrópolis";
    double cidadeB03_populacao;
    double cidadeB03_area;
    double cidadeB03_pib;
    int cidadeB03_pontosturisticos;

    //Cidade B04 = Angra dos Reis
    int cidadeB04_codigo = 4;
    char cidadeB04_nome[100] = "Angra dos Reis";
    double cidadeB04_populacao;
    double cidadeB04_area;
    double cidadeB04_pib;
    int cidadeB04_pontosturisticos;

    // ESTADO C = Minas Gerais
    // Cidade C01 = Belo Horizonte
    char estadoC_nome[100] = "Minas Gerais";
    int cidadeC01_codigo = 1;
    char cidadeC01_nome[100] = "Belo Horizonte";
    double cidadeC01_populacao;
    double cidadeC01_area;
    double cidadeC01_pib;
    int cidadeC01_pontosturisticos;

    // Cidade C02 = Uberlândia
    int cidadeC02_codigo = 2;
    char cidadeC02_nome[100] = "Uberlândia";
    double cidadeC02_populacao;
    double cidadeC02_area;
    double cidadeC02_pib;
    int cidadeC02_pontosturisticos;

    // Cidade C03 = Ouro Preto
    int cidadeC03_codigo = 3;
    char cidadeC03_nome[100] = "Ouro Preto";
    double cidadeC03_populacao;
    double cidadeC03_area;
    double cidadeC03_pib;
    int cidadeC03_pontosturisticos;

    // Cidade C04 = Montes Claros
    int cidadeC04_codigo = 4;
    char cidadeC04_nome[100] = "Montes Claros";
    double cidadeC04_populacao;
    double cidadeC04_area;
    double cidadeC04_pib;
    int cidadeC04_pontosturisticos;

    // ESTADO D = Bahia
    // Cidade D01 = Salvador
    char estadoD_nome[100] = "Bahia";
    int cidadeD01_codigo = 1;
    char cidadeD01_nome[100] = "Salvador";
    double cidadeD01_populacao;
    double cidadeD01_area;
    double cidadeD01_pib;
    int cidadeD01_pontosturisticos;

    // Cidade D02 = Feira de Santana
    int cidadeD02_codigo = 2;
    char cidadeD02_nome[100] = "Feira de Santana";
    double cidadeD02_populacao;
    double cidadeD02_area;
    double cidadeD02_pib;
    int cidadeD02_pontosturisticos;

    // Cidade D03 = Porto Seguro
    int cidadeD03_codigo = 3;
    char cidadeD03_nome[100] = "Porto Seguro";
    double cidadeD03_populacao;
    double cidadeD03_area;
    double cidadeD03_pib;
    int cidadeD03_pontosturisticos;

    // Cidade D04 = Ilhéus
    int cidadeD04_codigo = 4;
    char cidadeD04_nome[100] = "Ilhéus";
    double cidadeD04_populacao;
    double cidadeD04_area;
    double cidadeD04_pib;
    int cidadeD04_pontosturisticos;

    // ESTADO E = Paraná
    // Cidade E01 = Curitiba
    char estadoE_nome[100] = "Paraná";
    int cidadeE01_codigo = 1;
    char cidadeE01_nome[100] = "Curitiba";
    double cidadeE01_populacao;
    double cidadeE01_area;
    double cidadeE01_pib;
    int cidadeE01_pontosturisticos;

    // Cidade E02 = Londrina
    int cidadeE02_codigo = 2;
    char cidadeE02_nome[100] = "Londrina";
    double cidadeE02_populacao;
    double cidadeE02_area;
    double cidadeE02_pib;
    int cidadeE02_pontosturisticos;
    
    // Cidade E03 = Maringá
    int cidadeE03_codigo = 3;
    char cidadeE03_nome[100] = "Maringá";
    double cidadeE03_populacao;
    double cidadeE03_area;
    double cidadeE03_pib;
    int cidadeE03_pontosturisticos;

    // Cidade E04 = Foz do Iguaçu
    int cidadeE04_codigo = 4;
    char cidadeE04_nome[100] = "Foz do Iguaçu";
    double cidadeE04_populacao;
    double cidadeE04_area;
    double cidadeE04_pib;
    int cidadeE04_pontosturisticos;

    // ESTADO F = Santa Catarina
    // Cidade F01 = Florianópolis
    char estadoF_nome[100] = "Santa Catarina";
    int cidadeF01_codigo = 1;
    char cidadeF01_nome[100] = "Florianópolis";
    double cidadeF01_populacao;
    double cidadeF01_area;
    double cidadeF01_pib;
    int cidadeF01_pontosturisticos;

    // Cidade F02 = Joinville
    int cidadeF02_codigo = 2;
    char cidadeF02_nome[100] = "Joinville";
    double cidadeF02_populacao;
    double cidadeF02_area;
    double cidadeF02_pib;
    int cidadeF02_pontosturisticos;

    // Cidade F03 = Blumenau
    int cidadeF03_codigo = 3;
    char cidadeF03_nome[100] = "Blumenau";
    double cidadeF03_populacao;
    double cidadeF03_area;
    double cidadeF03_pib;
    int cidadeF03_pontosturisticos;

    // Cidade F04 = Balneário Camboriú
    int cidadeF04_codigo = 4;
    char cidadeF04_nome[100] = "Balneário Camboriú";
    double cidadeF04_populacao;
    double cidadeF04_area;
    double cidadeF04_pib;
    int cidadeF04_pontosturisticos;

    // ESTADO G = Rio Grande do Sul
    // Cidade G01 = Porto Alegre
    char estadoG_nome[100] = "Rio Grande do Sul";
    int cidadeG01_codigo = 1;
    char cidadeG01_nome[100] = "Porto Alegre";
    double cidadeG01_populacao;
    double cidadeG01_area;
    double cidadeG01_pib;
    int cidadeG01_pontosturisticos;

    // Cidade G02 = Caxias do Sul
    int cidadeG02_codigo = 2;
    char cidadeG02_nome[100] = "Caxias do Sul";
    double cidadeG02_populacao;
    double cidadeG02_area;
    double cidadeG02_pib;
    int cidadeG02_pontosturisticos;
    
    // Cidade G03 = Pelotas
    int cidadeG03_codigo = 3;
    char cidadeG03_nome[100] = "Pelotas";
    double cidadeG03_populacao;
    double cidadeG03_area;
    double cidadeG03_pib;
    int cidadeG03_pontosturisticos;

    // Cidade G04 = Santa Maria
    int cidadeG04_codigo = 4;
    char cidadeG04_nome[100] = "Santa Maria";
    double cidadeG04_populacao;
    double cidadeG04_area;
    double cidadeG04_pib;
    int cidadeG04_pontosturisticos;

    // ESTADO H = Goiás
    // Cidade H01 = Goiânia
    char estadoH_nome[100] = "Goiás";
    int cidadeH01_codigo = 1;
    char cidadeH01_nome[100] = "Goiânia";
    double cidadeH01_populacao;
    double cidadeH01_area;
    double cidadeH01_pib;
    int cidadeH01_pontosturisticos;
    
    // Cidade H02 = Anápolis
    int cidadeH02_codigo = 2;
    char cidadeH02_nome[100] = "Anápolis";
    double cidadeH02_populacao;
    double cidadeH02_area;
    double cidadeH02_pib;
    int cidadeH02_pontosturisticos;

    // Cidade H03 = Rio Verde
    int cidadeH03_codigo = 3;
    char cidadeH03_nome[100] = "Rio Verde";
    double cidadeH03_populacao;
    double cidadeH03_area;
    double cidadeH03_pib;
    int cidadeH03_pontosturisticos;

    // Cidade H04 = Catalão
    int cidadeH04_codigo = 4;
    char cidadeH04_nome[100] = "Catalão";
    double cidadeH04_populacao;
    double cidadeH04_area;
    double cidadeH04_pib;
    int cidadeH04_pontosturisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Entrada de dados
    // Estado A = São Paulo
    // Cidade A01 = São Paulo
    printf("Estado A São Paulo\n");
    printf("Cidade 01 - São Paulo.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeA01_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeA01_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeA01_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeA01_pontosturisticos);

    // Cidade A02 = Campinas
    printf("Cidade 02 - Campinas.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeA02_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeA02_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeA02_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeA02_pontosturisticos);

    // Cidade A03 = Santos
    printf("Cidade 03 - Santos.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeA03_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeA03_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeA03_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeA03_pontosturisticos);

    // Cidade A04 = Guarulhos
    printf("Cidaade 04 - Guarulhos.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeA04_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeA04_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeA04_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeA04_pontosturisticos);

    // Estado B = Rio de Janeiro
    // Cidade B01 = Rio de Janeiro
    printf("Estado B Rio de Janeiro\n");
    printf("Cidade 01 - Rio de Janeiro.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeB01_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeB01_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeB01_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");

    // Cidade B02 = Niterói
    printf("Cidade 02 - Niterói.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeB02_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeB02_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeB02_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeB02_pontosturisticos);

    // Cidade B03 = Petrópolis
    printf("Cidade 03 - Petrópolis.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeB03_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeB03_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeB03_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");

    // Cidade B04 = Angra dos Reis
    printf("Cidade 04 - Angra dos Reis.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeB04_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeB04_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeB04_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeB04_pontosturisticos);

    // Estado C = Minas Gerais
    // Cidade C01 = Belo Horizonte
    printf("Estado C Minas Gerais\n");
    printf("Cidade 01 - Belo Horizonte.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeC01_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeC01_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeC01_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeC01_pontosturisticos);

    // Cidade C02 = Uberlândia
    printf("Cidade 02 - Uberlândia.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeC02_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeC02_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeC02_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeC02_pontosturisticos);

    // Cidade C03 = Ouro Preto
    printf("Cidade 03 - Ouro Preto.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeC03_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeC03_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeC03_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");

    // Cidade C04 = Montes Claros
    printf("Cidade 04 - Montes Claros.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeC04_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeC04_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeC04_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");

    // Estado D = Bahia
    // Cidade D01 = Salvador
    printf("Estado D Bahia\n");
    printf("Cidade 01 - Salvador.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeD01_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeD01_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeD01_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeD01_pontosturisticos);

    // Cidade D02 = Feira de Santana
    printf("Cidade 02 - Feira de Santana.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeD02_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeD02_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeD02_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeD02_pontosturisticos);

    // Cidade D03 = Porto Seguro
    printf("Cidade 03 - Porto Seguro.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeD03_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeD03_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeD03_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeD03_pontosturisticos);

    // Cidade D04 = Ilhéus
    printf("Cidade 04 - Ilhéus.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeD04_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeD04_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeD04_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeD04_pontosturisticos);

    // Estado E = Paraná
    // Cidade E01 = Curitiba
    printf("Estado E Paraná\n");
    printf("Cidade 01 - Curitiba.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeE01_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeE01_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeE01_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");

    // Cidade E02 = Londrina
    printf("Cidade 02 - Londrina.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeE02_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeE02_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeE02_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeE02_pontosturisticos);

    // Cidade E03 = Maringá
    printf("Cidade 03 - Maringá.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeE03_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeE03_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeE03_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeE03_pontosturisticos);

    // Cidade E04 = Foz do Iguaçu
    printf("Cidade 04 - Foz do Iguaçu.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeE04_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeE04_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeE04_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeE04_pontosturisticos);

    // Estado F = Santa Catarina
    // Cidade F01 = Florianópolis
    printf("Estado F Santa Catarina\n");
    printf("Cidade 01 - Florianópolis.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeF01_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeF01_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeF01_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeF01_pontosturisticos);

    // Cidade F02 = Joinville
    printf("Cidade 02 - Joinville.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeF02_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeF02_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeF02_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeF02_pontosturisticos);

    // Cidade F03 = Blumenau
    printf("Cidade 03 - Blumenau.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeF03_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeF03_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeF03_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeF03_pontosturisticos);

    // Cidade F04 = Balneário Camboriú
    printf("Cidade 04 - Balneário Camboriú.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeF04_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeF04_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeF04_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeF04_pontosturisticos);

    // Estado G = Rio Grande do Sul
    // Cidade G01 = Porto Alegre
    printf("Estado G Rio Grande do Sul\n");
    printf("Cidade 01 - Porto Alegre.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeG01_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeG01_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeG01_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeG01_pontosturisticos);

    // Cidade G02 = Caxias do Sul
    printf("Cidade 02 - Caxias do Sul.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeG02_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeG02_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeG02_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeG02_pontosturisticos);

    // Cidade G03 = Pelotas
    printf("Cidade 03 - Pelotas.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeG03_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeG03_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeG03_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeG03_pontosturisticos);

    // Cidade G04 = Santa Maria
    printf("Cidade 04 - Santa Maria.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeG04_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeG04_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeG04_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeG04_pontosturisticos);

    // Estado H = Goiás
    // Cidade H01 = Goiânia
    printf("Estado H Goiás\n");
    printf("Cidade 01 - Goiânia.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeH01_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeH01_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeH01_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeH01_pontosturisticos);

    // Cidade H02 = Anápolis
    printf("Cidade 02 - Anápolis.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeH02_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeH02_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeH02_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeH02_pontosturisticos);

    // Cidade H03 = Rio Verde
    printf("Cidade 03 - Rio Verde.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeH03_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeH03_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeH03_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeH03_pontosturisticos);

    // Cidade H04 = Catalão
    printf("Cidade 04 - Catalão.\n");
    // Populacao da Cidade
    printf("Insira a polução da cidade...\n");
    scanf("%lf", &cidadeH04_populacao);
    // Area da cidade
    printf("Insira a aera da cidade...\n");
    scanf("%lf", &cidadeH04_area);
    // PIB da cidade
    printf("Insira o PIB da cidade...\n");
    scanf("%lf", &cidadeH04_pib);
    // Pontos turisticos da cidade
    printf("Insira o número de pontos turisticos...\n");
    scanf("%d", &cidadeH04_pontosturisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibindo
    // Estado A = São Paulo
    // Cidade A01 = São Paulo
    printf("Estado A: %s\n", estadoA_nome);
    printf("Cidade 1: %s\n", cidadeA01_nome);
    printf("Código da cidade: %d | ", cidadeA01_codigo);
    printf("Nome da cidade: %s | ", cidadeA01_nome);
    printf("População da cidade: %lf | ", cidadeA01_populacao);
    printf("Área da cidade: %lf | ", cidadeA01_area);
    printf("PIB da cidade: %lf | ", cidadeA01_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeA01_pontosturisticos);

    // Cidade A02 = Campinas
    printf("Cidade 2: %s\n", cidadeA02_nome);
    printf("Código da cidade: %d | ", cidadeA02_codigo);
    printf("Nome da cidade: %s | ", cidadeA02_nome);
    printf("Pupulação da cidade: %lf | ", cidadeA02_populacao);
    printf("Área da cidade: %lf | ", cidadeA02_area);
    printf("PIB da cidade: %lf | ", cidadeA02_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeA02_pontosturisticos);

    // Cidade A03 = Santos
    printf("Cidade 3: %s\n", cidadeA03_nome);
    printf("Código da cidade: %d | ", cidadeA03_codigo);
    printf("Nome da cidade: %s | ", cidadeA03_nome);
    printf("Pupulação da cidade: %lf | ", cidadeA03_populacao);
    printf("Área da cidade: %lf | ", cidadeA03_area);
    printf("PIB da cidade: %lf | ", cidadeA03_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeA03_pontosturisticos);

    // Cidade A04 = Guarulhos
    printf("Cidade 4: %s\n", cidadeA04_nome);
    printf("Código da cidade: %d | ", cidadeA04_codigo);
    printf("Nome da cidade: %s | ", cidadeA04_nome);
    printf("Pupulação da cidade: %lf | ", cidadeA04_populacao);
    printf("Área da cidade: %lf | ", cidadeA04_area);
    printf("PIB da cidade: %lf | ", cidadeA04_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeA04_pontosturisticos);

    // Estado B = Rio de Janeiro
    // Cidade B01 = Rio de Janeiro
    printf("Estado B: %s\n", estadoB_nome);
    printf("Cidade 1: %s\n", cidadeB01_nome);
    printf("Código da cidade: %d | ", cidadeB01_codigo);
    printf("Nome da cidade: %s | ", cidadeB01_nome);
    printf("População da cidade: %lf | ", cidadeB01_populacao);
    printf("Área da cidade: %lf | ", cidadeB01_area);
    printf("PIB da cidade: %lf | ", cidadeB01_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeB01_pontosturisticos);

    // Cidade B02 = Niterói
    printf("Cidade 2: %s\n", cidadeB02_nome);
    printf("Código da cidade: %d | ", cidadeB02_codigo);
    printf("Nome da cidade: %s | ", cidadeB02_nome);
    printf("População da cidade: %lf | ", cidadeB02_populacao);
    printf("Área da cidade: %lf | ", cidadeB02_area);
    printf("PIB da cidade: %lf | ", cidadeB02_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeB02_pontosturisticos);
    
    // Cidade B03 = Petrópolis
    printf("Cidade 3: %s\n", cidadeB03_nome);
    printf("Código da cidade: %d | ", cidadeB03_codigo);
    printf("Nome da cidade: %s | ", cidadeB03_nome);
    printf("População da cidade: %lf | ", cidadeB03_populacao);
    printf("Área da cidade: %lf | ", cidadeB03_area);
    printf("PIB da cidade: %lf | ", cidadeB03_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeB03_pontosturisticos);

    // Cidade B04 = Angra dos Reis
    printf("Cidade 4: %s\n", cidadeB04_nome);
    printf("Código da cidade: %d | ", cidadeB04_codigo);
    printf("Nome da cidade: %s | ", cidadeB04_nome);
    printf("População da cidade: %lf | ", cidadeB04_populacao);
    printf("Área da cidade: %lf | ", cidadeB04_area);
    printf("PIB da cidade: %lf | ", cidadeB04_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeB04_pontosturisticos);

    // Estado C = Minas Gerais
    // Cidade C01 = Belo Horizonte
    printf("Estado C: %s\n", estadoC_nome);
    printf("Cidade 1: %s\n", cidadeC01_nome);
    printf("Código da cidade: %d | ", cidadeC01_codigo);
    printf("Nome da cidade: %s | ", cidadeC01_nome);
    printf("População da cidade: %lf | ", cidadeC01_populacao);
    printf("Área da cidade: %lf | ", cidadeC01_area);
    printf("PIB da cidade: %lf | ", cidadeC01_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeC01_pontosturisticos);

    // Cidade C02 = Uberlândia
    printf("Cidade 2: %s\n", cidadeC02_nome);
    printf("Código da cidade: %d | ", cidadeC02_codigo);
    printf("Nome da cidade: %s | ", cidadeC02_nome);
    printf("População da cidade: %lf | ", cidadeC02_populacao);
    printf("Área da cidade: %lf | ", cidadeC02_area);
    printf("PIB da cidade: %lf | ", cidadeC02_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeC02_pontosturisticos);

    // Cidade C03 = Ouro Preto
    printf("Cidade 3: %s\n", cidadeC03_nome);
    printf("Código da cidade: %d | ", cidadeC03_codigo);
    printf("Nome da cidade: %s | ", cidadeC03_nome);
    printf("População da cidade: %lf | ", cidadeC03_populacao);
    printf("Área da cidade: %lf | ", cidadeC03_area);
    printf("PIB da cidade: %lf | ", cidadeC03_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeC03_pontosturisticos);

    // Cidade C04 = Montes Claros
    printf("Cidade 4: %s\n", cidadeC04_nome);
    printf("Código da cidade: %d | ", cidadeC04_codigo);
    printf("Nome da cidade: %s | ", cidadeC04_nome);
    printf("População da cidade: %lf | ", cidadeC04_populacao);
    printf("Área da cidade: %lf | ", cidadeC04_area);
    printf("PIB da cidade: %lf | ", cidadeC04_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeC04_pontosturisticos);

    // Estado D = Bahia
    // Cidade D01 = Salvador
    printf("Estado D: %s\n", estadoD_nome);
    printf("Cidade 1: %s\n", cidadeD01_nome);
    printf("Código da cidade: %d | ", cidadeD01_codigo);
    printf("Nome da cidade: %s | ", cidadeD01_nome);
    printf("População da cidade: %lf | ", cidadeD01_populacao);
    printf("Área da cidade: %lf | ", cidadeD01_area);
    printf("PIB da cidade: %lf | ", cidadeD01_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeD01_pontosturisticos);

    // Cidade D02 = Feira de Santana
    printf("Cidade 2: %s\n", cidadeD02_nome);
    printf("Código da cidade: %d | ", cidadeD02_codigo);
    printf("Nome da cidade: %s | ", cidadeD02_nome);
    printf("População da cidade: %lf | ", cidadeD02_populacao);
    printf("Área da cidade: %lf | ", cidadeD02_area);
    printf("PIB da cidade: %lf | ", cidadeD02_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeD02_pontosturisticos);

    // Cidade D03 = Porto Seguro
    printf("Cidade 3: %s\n", cidadeD03_nome);
    printf("Código da cidade: %d | ", cidadeD03_codigo);
    printf("Nome da cidade: %s | ", cidadeD03_nome);
    printf("População da cidade: %lf | ", cidadeD03_populacao);
    printf("Área da cidade: %lf | ", cidadeD03_area);
    printf("PIB da cidade: %lf | ", cidadeD03_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeD03_pontosturisticos);

    // Cidade D04 = Ilhéus
    printf("Cidade 4: %s\n", cidadeD04_nome);
    printf("Código da cidade: %d | ", cidadeD04_codigo);
    printf("Nome da cidade: %s | ", cidadeD04_nome);
    printf("População da cidade: %lf | ", cidadeD04_populacao);
    printf("Área da cidade: %lf | ", cidadeD04_area);
    printf("PIB da cidade: %lf | ", cidadeD04_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeD04_pontosturisticos);

    // Estado E = Paraná
    // Cidade E01 = Curitiba
    printf("Estado E: %s\n", estadoE_nome);
    printf("Cidade 1: %s\n", cidadeE01_nome);
    printf("Código da cidade: %d | ", cidadeE01_codigo);
    printf("Nome da cidade: %s | ", cidadeE01_nome);
    printf("População da cidade: %lf | ", cidadeE01_populacao);
    printf("Área da cidade: %lf | ", cidadeE01_area);
    printf("PIB da cidade: %lf | ", cidadeE01_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeE01_pontosturisticos);

    // Cidade E02 = Londrina
    printf("Cidade 2: %s\n", cidadeE02_nome);
    printf("Código da cidade: %d | ", cidadeE02_codigo);
    printf("Nome da cidade: %s | ", cidadeE02_nome);
    printf("População da cidade: %lf | ", cidadeE02_populacao);
    printf("Área da cidade: %lf | ", cidadeE02_area);
    printf("PIB da cidade: %lf | ", cidadeE02_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeE02_pontosturisticos);

    // Cidade E03 = Maringá
    printf("Cidade 3: %s\n", cidadeE03_nome);
    printf("Código da cidade: %d | ", cidadeE03_codigo);
    printf("Nome da cidade: %s | ", cidadeE03_nome);
    printf("População da cidade: %lf | ", cidadeE03_populacao);
    printf("Área da cidade: %lf | ", cidadeE03_area);
    printf("PIB da cidade: %lf | ", cidadeE03_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeE03_pontosturisticos);

    // Cidade E04 = Foz do Iguaçu
    printf("Cidade 4: %s\n", cidadeE04_nome);
    printf("Código da cidade: %d | ", cidadeE04_codigo);
    printf("Nome da cidade: %s | ", cidadeE04_nome);
    printf("População da cidade: %lf | ", cidadeE04_populacao);
    printf("Área da cidade: %lf | ", cidadeE04_area);
    printf("PIB da cidade: %lf | ", cidadeE04_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeE04_pontosturisticos);

    // Estado F = Santa Catarina
    // Cidade F01 = Florianópolis
    printf("Estado F: %s\n", estadoF_nome);
    printf("Cidade 1: %s\n", cidadeF01_nome);
    printf("Código da cidade: %d | ", cidadeF01_codigo);
    printf("Nome da cidade: %s | ", cidadeF01_nome);
    printf("População da cidade: %lf | ", cidadeF01_populacao);
    printf("Área da cidade: %lf | ", cidadeF01_area);
    printf("PIB da cidade: %lf | ", cidadeF01_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeF01_pontosturisticos);

    // Cidade F02 = Joinville
    printf("Cidade 2: %s\n", cidadeF02_nome);
    printf("Código da cidade: %d | ", cidadeF02_codigo);
    printf("Nome da cidade: %s | ", cidadeF02_nome);
    printf("População da cidade: %lf | ", cidadeF02_populacao);
    printf("Área da cidade: %lf | ", cidadeF02_area);
    printf("PIB da cidade: %lf | ", cidadeF02_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeF02_pontosturisticos);

    // Cidade F03 = Blumenau
    printf("Cidade 3: %s\n", cidadeF03_nome);
    printf("Código da cidade: %d | ", cidadeF03_codigo);
    printf("Nome da cidade: %s | ", cidadeF03_nome);
    printf("População da cidade: %lf | ", cidadeF03_populacao);
    printf("Área da cidade: %lf | ", cidadeF03_area);
    printf("PIB da cidade: %lf | ", cidadeF03_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeF03_pontosturisticos);

    // Cidade F04 = Balneário Camboriú
    printf("Cidade 4: %s\n", cidadeF04_nome);
    printf("Código da cidade: %d | ", cidadeF04_codigo);
    printf("Nome da cidade: %s | ", cidadeF04_nome);
    printf("População da cidade: %lf | ", cidadeF04_populacao);
    printf("Área da cidade: %lf | ", cidadeF04_area);
    printf("PIB da cidade: %lf | ", cidadeF04_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeF04_pontosturisticos);

    // Estado G = Rio Grande do Sul
    // Cidade G01 = Porto Alegre
    printf("Estado G: %s\n", estadoG_nome);
    printf("Cidade 1: %s\n", cidadeG01_nome);
    printf("Código da cidade: %d | ", cidadeG01_codigo);
    printf("Nome da cidade: %s | ", cidadeG01_nome);
    printf("População da cidade: %lf | ", cidadeG01_populacao);
    printf("Área da cidade: %lf | ", cidadeG01_area);
    printf("PIB da cidade: %lf | ", cidadeG01_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeG01_pontosturisticos);

    // Cidade G02 = Caxias do Sul
    printf("Cidade 2: %s\n", cidadeG02_nome);
    printf("Código da cidade: %d | ", cidadeG02_codigo);
    printf("Nome da cidade: %s | ", cidadeG02_nome);
    printf("População da cidade: %lf | ", cidadeG02_populacao);
    printf("Área da cidade: %lf | ", cidadeG02_area);
    printf("PIB da cidade: %lf | ", cidadeG02_pib); 
    printf("Quantidade de pontos turisticos: %d\n", cidadeG02_pontosturisticos);

    // Cidade G03 = Pelotas
    printf("Cidade 3: %s\n", cidadeG03_nome);
    printf("Código da cidade: %d | ", cidadeG03_codigo);
    printf("Nome da cidade: %s | ", cidadeG03_nome);
    printf("População da cidade: %lf | ", cidadeG03_populacao);
    printf("Área da cidade: %lf | ", cidadeG03_area);
    printf("PIB da cidade: %lf | ", cidadeG03_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeG03_pontosturisticos);

    // Cidade G04 = Santa Maria
    printf("Cidade 4: %s\n", cidadeG04_nome);
    printf("Código da cidade: %d | ", cidadeG04_codigo);
    printf("Nome da cidade: %s | ", cidadeG04_nome);
    printf("População da cidade: %lf | ", cidadeG04_populacao);
    printf("Área da cidade: %lf | ", cidadeG04_area);
    printf("PIB da cidade: %lf | ", cidadeG04_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeG04_pontosturisticos);

    // Estado H = Goiás
    // Cidade H01 = Goiânia
    printf("Estado H: %s\n", estadoH_nome);
    printf("Cidade 1: %s\n", cidadeH01_nome);
    printf("Código da cidade: %d | ", cidadeH01_codigo);
    printf("Nome da cidade: %s | ", cidadeH01_nome);
    printf("População da cidade: %lf | ", cidadeH01_populacao);
    printf("Área da cidade: %lf | ", cidadeH01_area);
    printf("PIB da cidade: %lf | ", cidadeH01_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeH01_pontosturisticos);

    // Cidade H02 = Anápolis
    printf("Cidade 2: %s\n", cidadeH02_nome);
    printf("Código da cidade: %d | ", cidadeH02_codigo);
    printf("Nome da cidade: %s | ", cidadeH02_nome);
    printf("População da cidade: %lf | ", cidadeH02_populacao);
    printf("Área da cidade: %lf | ", cidadeH02_area);
    printf("PIB da cidade: %lf | ", cidadeH02_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeH02_pontosturisticos);

    // Cidade H03 = Rio Verde
    printf("Cidade 3: %s\n", cidadeH03_nome);
    printf("Código da cidade: %d | ", cidadeH03_codigo);
    printf("Nome da cidade: %s | ", cidadeH03_nome);
    printf("População da cidade: %lf | ", cidadeH03_populacao);
    printf("Área da cidade: %lf | ", cidadeH03_area);
    printf("PIB da cidade: %lf | ", cidadeH03_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeH03_pontosturisticos);

    // Cidade H04 = Catalão
    printf("Cidade 4: %s\n", cidadeH04_nome);
    printf("Código da cidade: %d | ", cidadeH04_codigo);
    printf("Nome da cidade: %s | ", cidadeH04_nome);
    printf("População da cidade: %lf | ", cidadeH04_populacao);
    printf("Área da cidade: %lf | ", cidadeH04_area);
    printf("PIB da cidade: %lf | ", cidadeH04_pib);
    printf("Quantidade de pontos turisticos: %d\n", cidadeH04_pontosturisticos);

    // Retorno
    return 0;
}
