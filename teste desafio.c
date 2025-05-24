#include <stdio.h>

int main(){
    printf("Desafio Super trunfo\n");
    printf("novo commit\n");

    char codigo_da_cidade_1;
    char nome_da_cidade_1[20] ;
    int  populacao_da_cidade1;
    float area_da_cidade1;
    float PIB_da_cidade_1;
    int quantidade_pontos_turisticos_cidade_1;
    
    printf("Digite o codigo da cidade 1: \n");
    scanf("%c", &codigo_da_cidade_1);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", &nome_da_cidade1);

    printf("populacao: \n");
    scanf("%d", &populacao_da_cidade_1);

    printf("Digite a area da cidade 1: \n");
    scanf("%f", &area_da_cidade1);

    printf("Digite o PIB da cidade 1: \n");
    scanf(" %f", &PIB_da_cidade_1);

    printf("Digite a quantidade de pontos turisticos da cidade 1: \n");
    scanf("%d", &quantidade_pontos_turisticos_cidade_1);

    printf("Dados da Cidade Cadastrada\n");
    printf("Codigo da Cidade 1: %c\n" , codigo_da_cidade_1);
    printf("Nome da Cidade 1: %s\n" , nome_da_cidade_1);
    printf("Populacao da cidade 1: %d\n" , populacao_da_cidade_1);
    printf("Area da Cidade 1: %.2f km\n" , area_da_cidade1);
    printf("PIB da Cidade 1: %.2f milhoes\n" , PIB-da_cidade_1);
    printf("Quandidade de Pontos Turisticos da cidade 1: %d\n" , quantidade_pontos_turisticos_cidade_1);


    return 0;
}