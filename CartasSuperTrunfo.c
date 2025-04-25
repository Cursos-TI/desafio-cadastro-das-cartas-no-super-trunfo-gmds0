#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int pontoturisticos;
    unsigned long int populacao;
    float pib,area,percapita,densidade;
    char nome[100], codigo[100], estado[100];
    //variaveis da segunda carta
    int pontoturisticos2;
    unsigned long int populacao2;
    float pib2,area2,percapita2,densidade2;
    char nome2[100], codigo2[100], estado2[100];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf ("Carta 1:\n");

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

    densidade = (float) populacao / area;
    percapita = (float) pib / populacao;

    int superpoder,superpoder2;

    superpoder = (float) populacao + area + pib + pontoturisticos + percapita + (densidade / 1);
    superpoder2 = (float) populacao2 + area2 + pib2 + pontoturisticos2 + percapita2 + (densidade2 / 1);
    


//cadastro da segunda carta
printf ("\n\nCarta 2:");

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

    densidade2 = (float) populacao2 / area2;
    percapita2 = (float) pib2 / populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // ao adicionar ".2" a uma variavel do tipo float, indica quantas linhas depois da virgula vai ser exibido
    
    printf ("\nCarta 1: \nEstado:%s\nNome da cidade: %s \nCodigo %s",estado, nome, codigo);
    printf ("\n Area da cidade: %.2f KM² \nPIB; %.2f",area, pib);
    printf ("\n Numero da população: %d \npontos turisticos: %d\n", populacao, pontoturisticos);
    printf("Densidade Populacional:%.2f\n",densidade);
    printf("PIB per Capita:%.2f reais\n",percapita);
    printf("Super Poder: %f\n",superpoder);
    //exibiçao dos dados da segunda carta
    
    printf ("\nCarta 2: \nestado:%s\nNome da cidade: %s \nCodigo %s",estado2, nome2, codigo2);
    printf ("\n Area da cidade: %.2f KM² \nPIB; %.2f",area2, pib2);
    printf ("\n Numero da população: %d \npontos turisticos: %d\n", populacao2, pontoturisticos2);
    printf("Densidade Populacional:%.2f\n",densidade2);
    printf("PIB per Capita:%.2f reais\n",percapita2);
    printf("Super Poder: %f\n",superpoder2);
    
    // resultado da disputa das catartas

   printf("\n\nhora da luta !!! \n\n");
   printf("Numero 1 para carta 1\n");
   printf("Numero 0 para carta 2\n");
   printf("\nQuem vencer a maior quantidade de categorias e o vencedor da partida\n\n");

   printf("\nPopulação: %d\n",(populacao > pontoturisticos2));
   printf("Area: %d\n",(area > area2));
   printf("PIB: %d\n", (pib > pib2));
   printf("Pontos Turisticos: %d\n", (pontoturisticos > pontoturisticos2));
   printf("Densidade Populacional: %d\n",(densidade < densidade2));
   printf("PIB per capita: %d\n",(percapita > percapita2));
   printf("Super Poder: %d\n\n", (superpoder > superpoder2));



    return 0;
}
