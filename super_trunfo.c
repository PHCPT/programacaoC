#include <stdio.h>//incluindo as bibliotecas necessárias
#include <stdlib.h>
#include <time.h> 

int main() {

    char Estado; //declarando as variáveis da Carta 1
    char Codigo[4];
    char Cidade[20];
    unsigned long int Populacao;
    float Area;
    float PIB;
    int PontosTur;
    float DensPop;
    float PIBpCap;
    float SuperPoder;

    int opcao;

    DensPop = Populacao/Area;//cálculos
    PIBpCap = PIB*1000000000/Populacao;
    SuperPoder = (Populacao + Area + PIB + PIBpCap + (1/DensPop));


    char Estado2;//declarando as variáveis da carta 2
    char Codigo2[4];
    char Cidade2[20];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int PontosTur2;
    float DensPop2;
    float PIBpCap2;
    float SuperPoder2;

    DensPop2 = Populacao2/Area2;//Operação de divisão para cálculo de densidade populacional
    PIBpCap2 = PIB2*1000000000/Populacao2;//Operação de divisão para cálculo de PIB per Capta
    SuperPoder2 = (Populacao2 + Area2 + PIB2 + PIBpCap2 + (1/DensPop2));//cálculo do superpoder da carta

    // Entrada de dados da carta 1
    printf("Carta 1:\n");
    printf("População: ");
    scanf("%lu", &Populacao);
    printf("Área: ");
    scanf("%f", &Area);
    printf("PIB (em bilhões): ");
    scanf("%f", &PIB);
    printf("Pontos Turísticos: ");
    scanf("%d", &PontosTur);

    // Entrada de dados da carta 2
    printf("\nCarta 2:\n");
    printf("População: ");
    scanf("%lu", &Populacao2);
    printf("Área: ");
    scanf("%f", &Area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &PIB2);
    printf("Pontos Turísticos: ");
    scanf("%d", &PontosTur2);

    // Menu de comparação
    printf("\nEscolha o item para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Superpoder\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nResultado:\n");

    switch (opcao) {
        case 1:
            if (Populacao > Populacao2)
                printf("Carta 1 vence na População.\n");
            else if (Populacao2 > Populacao)
                printf("Carta 2 vence na População.\n");
            else
                printf("Empate em População.\n");
            break;

        case 2:
            if (Area > Area2)
                printf("Carta 1 vence na Área.\n");
            else if (Area2 > Area)
                printf("Carta 2 vence na Área.\n");
            else
                printf("Empate em Área.\n");
            break;

            case 3:
            if (PIB > PIB2)
                printf("Carta 1 vence na Área.\n");
            else if (PIB2 > PIB)
                printf("Carta 2 vence na Área.\n");
            else
                printf("Empate em Área.\n");
            break;

            case 4:
            if (PontosTur > PontosTur2)
                printf("Carta 1 vence na Área.\n");
            else if (PontosTur2 > PontosTur)
                printf("Carta 2 vence na Área.\n");
            else
                printf("Empate em Área.\n");
            break;

        case 5:
            DensPop = Populacao / Area;
            DensPop2 = Populacao2 / Area2;

            if (DensPop < DensPop2)
                printf("Carta 1 vence em Densidade Populacional.\n");
            else if (DensPop2 < DensPop)
                printf("Carta 2 vence em Densidade Populacional.\n");
            else
                printf("Empate em Densidade Populacional.\n");
            break;

        case 6:
            PIBpCap = (PIB * 1000000000) / Populacao;
            PIBpCap2 = (PIB2 * 1000000000) / Populacao2;

            if (PIBpCap > PIBpCap2)
                printf("Carta 1 vence em PIB per Capita.\n");
            else if (PIBpCap2 > PIBpCap)
                printf("Carta 2 vence em PIB per Capita.\n");
            else
                printf("Empate em PIB per Capita.\n");
            break;

        case 7:
            DensPop = Populacao / Area;
            DensPop2 = Populacao2 / Area2;
            PIBpCap = (PIB * 1000000000) / Populacao;
            PIBpCap2 = (PIB2 * 1000000000) / Populacao2;
            SuperPoder = Populacao + Area + PIB + PIBpCap + (1 / DensPop);
            SuperPoder2 = Populacao2 + Area2 + PIB2 + PIBpCap2 + (1 / DensPop2);

            if (SuperPoder > SuperPoder2)
                printf("Carta 1 vence no Superpoder.\n");
            else if (SuperPoder2 > SuperPoder)
                printf("Carta 2 vence no Superpoder.\n");
            else
                printf("Empate no Superpoder.\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}



    /* printf("***  Insira os dados da Carta 1  *** \n");//determinando os textos que aparecerão na tela do usuário
    printf(" \n");

    printf("Seu Estado é (coloque A a H): \n");
    scanf(" %c", &Estado);//campo para o usuário digitar os dados
    
    printf("Digite o código do Estado (coloque A a H seguido do número 01 a 04): \n");
    scanf("%s", Codigo);

    while (getchar() != '\n');//comando foi necessário para não pular a opção do usuário digitar nome da Cidade 
    
    printf("Nome da cidade: \n");
    fgets(Cidade, sizeof(Cidade), stdin);//comando foi necessário para aceitar nome composto

    printf("População da cidade: \n");
    scanf("%lu", &Populacao);

    printf("Área da cidade, em kmˆ2: \n");
    scanf("%f", &Area);

    printf("PIB da cidade, em bilhões de reais: \n");
    scanf("%f", &PIB);

    printf("Número de pontos turísticos da cidade: \n");
    scanf("%d", &PontosTur);
    printf(" \n");
    printf(" \n");//marcadores para melhorar a formatação de apresentaçao dos dados
    printf(" ----------------------------------------------------------------------------------------------------- \n");
    printf(" \n");
    printf(" \n");
    
    printf ("===*** Carta 1 ***===\n");//a partir deste ponto é determinado como os dados digitados pelo usuário serão sumarizados de forma organizada
    printf(" \n");

    DensPop = Populacao/Area;
    PIBpCap = PIB*1000000000/Populacao;
    SuperPoder = (Populacao + Area + PIB + PIBpCap + (1/DensPop));

    printf ("Estado: %c \n", Estado);//apresentação dos dados de forma sumarizada de acordo com as instruções do desafio
    printf ("Código: %s \n", Codigo);
    printf ("Nome da cidade: %s", Cidade);
    printf ("População: %lu habitantes\n", Populacao);
    printf ("Área: %0.2f Kmˆ2\n", Area);
    printf ("PIB: %.2f bilhões de reais \n", PIB);
    printf ("Número de Pontos Turísticos: %d \n", PontosTur);
    printf ("Densidade Populacional: %.2f hab/kmˆ2 \n", DensPop);
    printf ("PIB per Capta: %.2f R$/hab \n", PIBpCap);
    printf ("Super Poder: %.2f \n", SuperPoder);
   
    printf(" \n");
    printf(" \n");//marcadores para melhorar a formatação de apresentaçao dos dados
    printf(" ----------------------------------------------------------------------------------------------------- \n");
    printf(" \n");
    printf(" \n");

    char Estado2;//declarando as variáveis da carta 2
    char Codigo2[4];
    char Cidade2[20];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int PontosTur2;
    float DensPop2;
    float PIBpCap2;
    float SuperPoder2;


    printf("***  Insira os dados da Carta 2  *** \n");//agora se repete o mesmo padrão anterior
    printf(" \n");

    printf("Seu Estado é (coloque A a H): \n");
    scanf(" %c", &Estado2);
    
    printf("Digite o código do Estado (coloque A a H seguido do número 01 a 04): \n");
    scanf("%s", Codigo2);

    while (getchar() != '\n');  

    printf("Nome da cidade: \n");
    fgets(Cidade2, sizeof(Cidade2), stdin);

    printf("População da cidade: \n");
    scanf("%lu", &Populacao2);

    printf("Área da cidade, em kmˆ2: \n");
    scanf("%f", &Area2);

    printf("PIB da cidade, em bilhões de reais: \n");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos da cidade: \n");
    scanf("%d", &PontosTur2);
    printf(" \n");
    printf(" \n");

    DensPop2 = Populacao2/Area2;//Operação de divisão para cálculo de densidade populacional
    PIBpCap2 = PIB2*1000000000/Populacao2;//Operação de divisão para cálculo de PIB per Capta
    SuperPoder2 = (Populacao2 + Area2 + PIB2 + PIBpCap2 + (1/DensPop2));//cálculo do superpoder da carta

    printf(" \n");
    printf(" \n");//marcadores para melhorar a formatação de apresentaçao dos dados
    printf(" ----------------------------------------------------------------------------------------------------- \n");
    printf(" \n");
    printf(" \n");

    printf ("===*** Carta 2 ***===\n"); //apresentação dos dados de forma sumarizada de acordo com as instruções do desafio
    printf ("Estado: %c \n", Estado2);
    printf ("Código: %s \n", Codigo2);
    printf ("Nome da cidade: %s", Cidade2);
    printf ("População: %lu habitantes\n", Populacao2);
    printf ("Área: %0.2f Kmˆ2 \n", Area2);
    printf ("PIB: %0.2f bilhões de reais \n", PIB2);
    printf ("Número de Pontos Turísticos: %d \n", PontosTur2);
    printf ("Densidade Populacional: %.2f hab/kmˆ2 \n", DensPop2);
    printf ("PIB per Capta: %.2f R$/hab \n", PIBpCap2);
    printf ("Super Poder: %.2f \n", SuperPoder2);

    printf(" \n");
    printf(" \n");//marcadores para melhorar a formatação de apresentaçao dos dados
    printf(" ----------------------------------------------------------------------------------------------------- \n");
    printf(" \n");
    printf(" \n");

    printf ("***=== Agora teremos a comparação das cartas. ===*** \n");//utilização de operadores relacionais para comparação das cartas e determinar vencedor para cada item
    printf(" \n");
    printf ("--->>> Quando o valor der 1 (verdadeiro), a carta 1 venceu.\n");
    printf ("--->>> Quando o valor der 0 (falso), a carta 2 venceu.\n");
    printf(" \n");
    printf ("População carta 1 > carta 2: %d \n", Populacao > Populacao2);
    printf(" \n");
    printf ("Área carta 1 > carta 2: %d \n", Area > Area2);
    printf(" \n");
    printf ("PIB carta 1 > carta 2: %d \n", PIB > PIB2);
    printf(" \n");
    printf ("Pontos Turísticos carta 1 > carta 2: %d \n", PontosTur > PontosTur2);
    printf(" \n");
    printf ("Densidade Populacional carta 1 < carta 2: %d \n", DensPop < DensPop2);
    printf(" \n");
    printf ("PIB per capta carta 1 > carta 2: %d \n", PIB > PIB2);
    printf(" \n");
    printf ("Super Poder carta 1 > carta 2: %d \n", SuperPoder > SuperPoder2);
    

    printf(" \n");
    printf(" \n");//marcadores para melhorar a formatação de apresentaçao dos dados
    printf(" ----------------------------------------------------------------------------------------------------- \n");
    printf(" \n");
    printf(" \n");

    printf ("===*** Agora o resultado usando os operadores relacionais ***===");
    printf(" \n");
    printf(" \n");

    if (Populacao > Populacao2) {//aqui eu estou testando o uso de operdores relacionais if else
        printf ("A carta 1 tem população mais elevada que a carta 2. Carta 1 venceu!. \n");}

    else {printf ("A carta 2 tem população mais elevada que a carta 1. Carta 2 venceu! \n");}

    
    if (Area > Area2) {//aqui eu estou testando o uso de operdores relacionais if else
        printf ("A carta 1 tem área mais elevada que a carta 2. Carta 1 venceu!. \n");}
        
    else {printf ("A carta 2 tem área mais elevada que a carta 1. Carta 2 venceu! \n");}

    if (PIB > PIB2) {//aqui eu estou testando o uso de operdores relacionais if else
        printf ("A carta 1 tem PIB mais elevado que a carta 2. Carta 1 venceu! \n");}

    else {printf ("A carta 2 tem PIB mais elevada que a carta 1. Carta 2 venceu! \n");}

    if (PontosTur > PontosTur2) {//aqui eu estou testando o uso de operdores relacionais if else
        printf ("A carta 1 tem mais pontos turísticos que a carta 2. Carta 1 venceu! \n");}

    else {printf ("A carta 2 tem mais pontos turísticos que a carta 1. Carta 2 venceu! \n");}

    printf(" \n");
    printf(" \n");//marcadores para melhorar a formatação de apresentaçao dos dados
    printf(" ----------------------------------------------------------------------------------------------------- \n");
    printf(" \n");
    printf(" \n");

    
    return 0;
    
}
   */