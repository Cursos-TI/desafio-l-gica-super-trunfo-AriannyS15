#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declarando Variavel Carta 1

    char estado;
    int codigo;
    char nome_cidade[100];
    int populacao;
    int pontoturistico;
    float area;
    float pib;
    float desidadepopulacional;
    float pibpercapta;

    // Declarando Variavel Carta 2
    char estado_2;
    int codigo_2;
    char nome_cidade_2[100];
    int populacao_2;
    int pontoturistico_2;
    float area_2;
    float pib_2;
    float desidadepopulacional_2;
    float pibpercapta_2;

    
    // Cadastro das Cartas:
    //carta 1
    printf("Carta 1\n");
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado);

    printf("Digite o número da cidade: ");
    scanf("%d", &codigo);

    printf ("Nome Da Cidade: \n");
    scanf("%s", &nome_cidade);

    printf ("Total De Habitantes: \n");
    scanf ("%d", &populacao);

    printf ("Quantidade De Pontos Turisticos: \n");
    scanf ("%d", &pontoturistico);

    printf ("Area: \n");
    scanf ("%f", &area);

    printf ("pib: \n");
    scanf ("%f", &pib);

//carta 2
    printf("\n");
    printf("Carta 2\n");
    printf ("Digite a letra do estado: \n");
    scanf(" %c", &estado_2);

    printf("Digite o número da cidade: \n");
    scanf("%d", &codigo_2);

    printf ("Nome Da Cidade: \n");
    scanf("%s", &nome_cidade_2);

    printf ("Total De Habitantes: \n");
    scanf ("%d", &populacao_2);

    printf ("Quantidade De Pontos Turisticos: \n");
    scanf ("%d", &pontoturistico_2);

    printf ("Area: \n");
    scanf ("%f", &area_2);

    printf ("pib: \n");
    scanf ("%f", &pib_2);

    //calculando densidade e pib per capta das 2 cartas

    desidadepopulacional = (float)populacao / area;

    pibpercapta = pib / (float)populacao;

    desidadepopulacional_2 = (float)populacao_2 / area_2;

    pibpercapta_2 = pib_2 / (float)populacao_2;
   
    // Imprimindo dados dass 2 cartas
    printf("\n");
    printf("-----Dados-----");
    printf ("Carta 1! \n");
    printf("Codigo da cidade: %c%d \n", estado, codigo);
    printf ("Habitantes: %d \n", populacao);
    printf ("Pontos Turisticos: %d \n", pontoturistico);
    printf ("Area: %f \n", area);
    printf ("Pib: %f \n", pib);
    printf("Pib Per Capital é: %.4f\n", pibpercapta);
    printf ("A Desidade Populacional é: %.2f \n", desidadepopulacional);


    printf ("\nCarta 2! \n");
    printf("Codigo da cidade: %c%d \n", estado_2, codigo_2);
    printf ("cidade: %s \n", nome_cidade_2);
    printf ("Habitantes: %d \n", populacao_2);
    printf ("Pontos Turisticos: %d \n", pontoturistico_2);
    printf ("Area: %f \n", area_2);
    printf ("Pib: %f \n", pib_2);
    printf ("Pib Per Capital é: %.4f \n", pibpercapta_2);
    printf ("A Desidade Populacional é: %.2f \n", desidadepopulacional_2);

   // Declarando if e if else
   if (pontoturistico > pontoturistico_2){
    printf ("Os Pontos Turisticos Da Carta 1 São Maiores Que Os Das Cartas 2\n");
 } else{
    printf ("Os Pontos Turisticos Da Carta 2 São Menores Que Os Das Cartas 1\n"); 
 }


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
