#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int codigo,pontoturisticos;
    float pib,area,populacao;
    char nome[100];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf ("Digite o codigo da cidade: ");
    scanf (" %d" ,&codigo);

    printf ("Digite o nome da cidade: ");
    scanf("%s" ,&nome);

    printf ("Digite o numero da populaçao: ");
    scanf (" %f", &populacao);

    printf ("digite a area: ");
    scanf(" %f", &area);

    printf ("Digite o PIB: ");
    scanf ("%f", &pib);

    printf ("Digite o numero de prontos turisticos: ");
    scanf ("%d", &pontoturisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // ao adicionar ".2" a uma variavel do tipo float, indica quantas linhas depois da virgula vai ser exibido
    printf ("\n Nome da ciade: %s - Codigo %d", nome, codigo);
    printf ("\n Area da cidade: %.2f KM² - PIB; %.2f",area, pib);
    printf ("\n Numero da população: %.2f - pontos turisticos: %d \n", populacao, pontoturisticos);

    return 0;
}