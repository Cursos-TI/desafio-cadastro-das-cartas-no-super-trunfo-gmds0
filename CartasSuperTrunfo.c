#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // variaveis de entrada de dados
    int pontoturisticos;
    float area,populacao, densidade, pib, percapita;
    char nome[100], estado[100], codigo[100];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    percapita = pib /populacao;
    densidade = area / populacao;

    printf("Digite de qual estado a carta sera cadastrada: ");
    scanf ("%s", &estado);

    printf ("Digite o codigo da Carta: ");
    scanf (" %s" ,&codigo);

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
    // saida dos dados cadastrados pelo usuario
    
    printf ("\nestado: %s \n", estado);
    printf ("Codigo da carta: %s \n", codigo);
    printf ("Nome da Cidade: %s \n", nome);
    printf ("População: %.2f \n", populacao);
    printf ("Area: %.2f KM² \n", area);
    printf ("Densidade Populacional: %.2f pessoal/km² \n", densidade);
    printf ("PIB: %.2f Biblhoes de reais \n", pib);
    printf ("PIB per Capita: %.2f reais \n", percapita);
    printf ("Numero de Pontos Turisticos: %d \n", pontoturisticos);

    return 0;
}