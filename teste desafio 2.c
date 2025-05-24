#include <stdio.h>

int main(){
    printf("Desafio Super trunfo\n");
    printf("novo commit\n");

    char Estado_1;
    char codigo_da_carta_1[10];
    char nome_da_cidade_1[20];
    int  populacao_da_cidade1;
    float area_da_cidade1;
    float PIB_da_cidade_1;
    int quantidade_pontos_turisticos_cidade_1;

    printf("Digite o Estado 1:  \n");
    scanf("%c", &Estado_1);

    
    printf("Digite o codigo da carta 1: \n");
    scanf("%s", &codigo_da_carta_1);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", &nome_da_cidade_1);

    printf("populacao: \n");
    scanf("%d", &populacao_da_cidade1);

    printf("Digite a area da cidade 1: \n");
    scanf("%f", &area_da_cidade1);

    printf("Digite o PIB da cidade 1: \n");
    scanf(" %f", &PIB_da_cidade_1);

    printf("Digite a quantidade de pontos turisticos da cidade 1: \n");
    scanf("%d", &quantidade_pontos_turisticos_cidade_1);

    char Estado_2;
    char codigo_da_carta_2[10];
    char nome_da_cidade_2[20] ;
    int  populacao_da_cidade2;
    float area_da_cidade2;
    float PIB_da_cidade_2;
    int quantidade_pontos_turisticos_cidade_2;
   
    printf("Digite o Estado 2:  \n");
    scanf("%c", &Estado_2);

    printf("Digite o codigo da carta 2: \n");
    scanf("%s", &codigo_da_carta_2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &nome_da_cidade_2);

    printf("populacao: \n");
    scanf("%d", &populacao_da_cidade2);

    printf("Digite a area da cidade 2: \n");
    scanf("%f", &area_da_cidade2);

    printf("Digite o PIB da cidade 2: \n");
    scanf(" %f", &PIB_da_cidade_2);

    printf("Digite a quantidade de pontos turisticos da cidade 2: \n");
    scanf("%d", &quantidade_pontos_turisticos_cidade_2);

    printf("Dados das Cidades Cadastradas\n");
    printf("Estado 1: %c\n", Estado_1);
    printf("Codigo da carta 1: %s\n" , codigo_da_carta_1);
    printf("Nome da Cidade 1: %s\n" , nome_da_cidade_1);
    printf("Populacao da cidade 1: %d\n" , populacao_da_cidade1);
    printf("Area da Cidade 1: %.2f km\n" , area_da_cidade1);
    printf("PIB da Cidade 1: %.2f milhoes\n" , PIB_da_cidade_1);
    printf("Quandidade de Pontos Turisticos da cidade 1: %d\n" , quantidade_pontos_turisticos_cidade_1);

    printf("Estado 2: %c\n", Estado_2);
    printf("Codigo da Cidade 2: %s\n" , codigo_da_carta_2);
    printf("Nome da Cidade 2: %s\n" , nome_da_cidade_2);
    printf("Populacao da cidade 2: %d\n" , populacao_da_cidade2);
    printf("Area da Cidade 2: %.2f km\n" , area_da_cidade2);
    printf("PIB da Cidade 2: %.2f milhoes\n" , PIB_da_cidade_2);
    printf("Quandidade de Pontos Turisticos da cidade 2: %d\n" , quantidade_pontos_turisticos_cidade_2);


    return 0;
}