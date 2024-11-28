#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int codigo,pontoturisticos;
    float pib,area, populaçao;
    char nome[100];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf ("Digite o codigo da cidade: \n");
    scanf (" %d" ,&codigo);

    printf ("Digite o nome da cidade: \n");
    scanf("%s" ,&nome);

    printf ("Digite o numero da populaçao: \n");
    scanf (" %f", &populaçao);

    printf ("digite a area: \n");
    scanf(" %f", &area);
    printf ("Digite o PIB: \n");
    scanf ("%f", &pib);

    printf ("Digite o numero de prontos turisticos: \n");
    scanf ("%d", &pontoturisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf ("aqui estão os dados informados: \n Cidade: %s \n Codigo: %d \n População: %f \n area: %f KM² \n PIB: %f \n Pontos turisticos: %d \n", nome, codigo, populaçao, area, pib, pontoturisticos);

    return 0;