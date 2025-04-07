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
    scanf("%c", &nome_cidade);

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

// Comparação de switch
int escolha;

printf ("Comparação\n");
printf("1 - Comparar População\n");
printf("2 - Comparar Área\n");
printf("3 - Comparar PIB\n");
printf("4 - Comparar Pontos Turísticos\n");
printf("5 - Comparar Densidade Populacional\n");
printf("6 - Comparar PIB Per Capita\n");
printf("0 - Sair\n");
printf("Escolha uma opção: ");
scanf ("%d", &escolha);

switch (escolha){
case 1:
    printf("População:%d vs %d\n", populacao, populacao_2);
    if (populacao == populacao_2) {
       printf("Empate");
    } else if (populacao > populacao_2) {
       printf ("A População Da Carta 1 È Maior Que Da Carta 2");
    } else {
       printf ("A População Da Carta 2 È Maior Que Da Carta 1"); 
    }
break;
case 2:
    printf("Àrea:%.2f km² vs %.2f km²\n", area, area_2);
    if (area == area_2) {
       printf ("Empate");
    } else if (area > area_2) {
       printf("A Àrea Da Carta 1 È Maior Que Da Carta 2");
    } else {
        printf("A Àrea Da Carta 2 È Maior Que Da Carta 1");
    }
break;
case 3:
    printf ("PIB:R$ %.2f bilhões vs R$ %.2f bilhões\n", pib, pib_2);
    if (pib == pib_2) {
       printf ("Empate");
    } else if (pib > pib_2) {
       printf("O Pib Da Carta 1 È Maior Que Da Carta 2");
    } else {
        printf("O Pib Da Carta 2 È Maior Que Da Carta 1");
    }
break;
case 4:
    printf("Pontos Turísticos: %d Vs %d\n", pontoturistico, pontoturistico_2);
    if (pontoturistico == pontoturistico_2) {
       printf ("Empate");
    } else if (pontoturistico > pontoturistico_2) {
       printf("A Carta 1 Tem Mais Pontos Turisticos Que Carta 2");
    } else {
        printf("A Carta 2 Tem Mais Pontos turisticos Que Carta 1");
    }
break;
case 5:
    printf ("Densidade Populacional: %.2f hab/km² vs %.2f hab/km²\n", desidadepopulacional, desidadepopulacional_2);
    if (desidadepopulacional == desidadepopulacional_2) {
        printf ("Empate");
     } else if (desidadepopulacional > desidadepopulacional_2) {
        printf("A Densidade Populacional Da Carta 1 È Maior Que Da Carta 2");
     } else {
         printf("A Densidade Populacional Da Carta 2 È Maior Que Da Carta 1");
     }
break;
case 6:
     printf("PIB Per Capita: R$ %.2f vs R$ %.2f\n", pibpercapta, pibpercapta_2);
     if (pibpercapta == pibpercapta_2) {
        printf ("Empate");
     } else if (pibpercapta > pibpercapta_2) {
        printf("O Pib Percapita Da Carta 1 È Maior Que Da Carta 2");
     } else {
         printf("O Pib Percapita Da Carta 2 È Maior Que Da Carta 1");
     }
 break;
}
    return 0;
}
