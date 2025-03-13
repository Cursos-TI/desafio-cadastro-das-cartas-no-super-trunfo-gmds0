#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int pontoturisticos,populacao;
    float pib,area;
    char nome[100], codigo[100], estado[100];
    //variaveis da segunda carta
    int pontoturisticos2,populacao2;
    float pib2,area2;
    char nome2[100], codigo2[100], estado2[100];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o estado:");
    scanf("%s", estado);

    printf ("Digite o codigo da carta: ");
    scanf (" %s" ,&codigo);

    printf ("Digite o nome da cidade: ");
    scanf("%s" ,&nome);

    printf ("Digite o numero da populaçao: ");
    scanf (" %d", &populacao);

    printf ("digite a area: ");
    scanf(" %f", &area);

    printf ("Digite o PIB: ");
    scanf ("%f", &pib);

    printf ("Digite o numero de prontos turisticos: ");
    scanf ("%d", &pontoturisticos);
//cadastro da segunda carta
    printf("\nDigite o estado:");
    scanf("%s", estado2);

    printf ("Digite o codigo da carta: ");
    scanf (" %s" ,&codigo2);

    printf ("Digite o nome da cidade: ");
    scanf("%s" ,&nome2);

    printf ("Digite o numero da populaçao: ");
    scanf (" %d", &populacao2);

    printf ("digite a area: ");
    scanf(" %f", &area2);

    printf ("Digite o PIB: ");
    scanf ("%f", &pib2);

    printf ("Digite o numero de prontos turisticos: ");
    scanf ("%d", &pontoturisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // ao adicionar ".2" a uma variavel do tipo float, indica quantas linhas depois da virgula vai ser exibido
    
    printf ("\nCarta 1: \nEstado:%s\nNome da cidade: %s \nCodigo %s",estado, nome, codigo);
    printf ("\n Area da cidade: %.2f KM² \nPIB; %.2f",area, pib);
    printf ("\n Numero da população: %d \npontos turisticos: %d\n", populacao, pontoturisticos);
    //exibiçao dos dados da segunda carta
    printf ("\nCarta 2: \nestado:%s\nNome da cidade: %s \nCodigo %s",estado2, nome2, codigo2);
    printf ("\n Area da cidade: %.2f KM² \nPIB; %.2f",area2, pib2);
    printf ("\n Numero da população: %d \npontos turisticos: %d\n", populacao2, pontoturisticos2);

    return 0;
}    
