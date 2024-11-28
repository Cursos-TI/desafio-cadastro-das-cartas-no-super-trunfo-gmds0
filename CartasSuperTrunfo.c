#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int codigo,pontoturisticos, populaçao;
    float pib,area;
    char nome[100];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf ("Digite o codigo da cidade: \n");
    scanf ("%d" ,&codigo);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome);

    printf ("Digite o numero da populaçao: \n");
    scanf ("%d", &populaçao);

    printf ("digite a area: \n");
    scanf("%f", &area);

    printf ("Digite o PIB: \n");
    scanf ("%f", &pib)

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
