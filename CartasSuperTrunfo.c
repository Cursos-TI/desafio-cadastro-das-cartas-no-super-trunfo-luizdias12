#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    printf("Cadastro das cartas Super Trunfo\n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Definindo as variaveis

    char codigo_estado;
    char codigo_cidade[2];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Entrada dos dados

    //Codigo do Estado ()
    printf("Digite o Código do Estado (A a H):\n");
    scanf(" %c", &codigo_estado);

    //Codigo da Cidade
    printf("Digite o Código da Cidade (01 a 04):\n");
    scanf(" %s", &codigo_cidade);

    //Nome da Cidade
    printf("Digite o Nome da Cidade:\n");
    scanf(" %s", &nome_cidade);

    //Numero da Populaçao
    printf("Digite a População da Cidade (ex. 250000):\n");
    scanf(" %d", &populacao);

    //Área da Cidade (km2)
    printf("Digite a Área da Cidade em km² (ex. 350.00):\n");
    scanf(" %f", &area);

    //PIB da Cidade
    printf("Digite o Valor do PIB em bilhões de reais (ex. 2.36):\n");
    scanf(" %f", &pib);

    //Pontos Turísticos da Cidade
    printf("Digite a Quantidade de Pontos Turísticos da Cidade (ex. 10):\n");
    scanf(" %d", &pontos_turisticos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Dados da Carta Cadastrada:\n");
    printf("Código da Carta: %c%s\n", codigo_estado, codigo_cidade);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População da Cidade: %d\n", populacao);
    printf("Área da Cidade: %.2f km²\n", area);
    printf("Valor de PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
