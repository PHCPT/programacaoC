#include <stdio.h> 

int main() {

    char Estado;//declarando as variáveis
    char Codigo[4];
    char Cidade[20];
    int Populacao;
    float Area;
    float PIB;
    int PontosTur;
    float DensPop;

    printf("***  Insira os dados da Carta 1  *** \n");//determinando os textos que aparecerão na tela do usuário
    printf(" \n");

    printf("Seu Estado é (coloque A a H): \n");
    scanf(" %c", &Estado);//campo para o usuário digitar os dados
    
    printf("Digite o código do Estado (coloque A a H seguido do número 01 a 04): \n");
    scanf("%s", Codigo);

    while (getchar() != '\n');  

    printf("Nome da cidade: \n");
    fgets(Cidade, sizeof(Cidade), stdin);//comando foi necessário para aceitar nome composto

    printf("População da cidade: \n");
    scanf("%d", &Populacao);

    printf("Área da cidade, em kmˆ2: \n");
    scanf("%f", &Area);

    printf("PIB da cidade, em bilhões de reais: \n");
    scanf("%f", &PIB);

    printf("Número de pontos turísticos da cidade: \n");
    scanf("%d", &PontosTur);
    printf(" \n");
    printf(" \n");

    printf ("===*** Carta 1 ***===\n");//a partir deste ponto é determinado como os dados digitados pelo usuário serão sumarizados de forma organizada
    printf(" \n");

    DensPop = Populacao/Area;

    printf ("Estado: %c \n", Estado);
    printf ("Código: %s \n", Codigo);
    printf ("Nome da cidade: %s", Cidade);
    printf ("População: %d \n", Populacao);
    printf ("Área: %0.2f Kmˆ2\n", Area);
    printf ("PIB: %0.2f bilhões \n", PIB);
    printf ("Número de Pontos Turísticos: %d \n", PontosTur);
    printf ("Densidade Populacional: %.2f hab/kmˆ2 \n", DensPop);
    printf(" \n");
    printf(" \n");
    printf(" \n");



    printf("***  Insira os dados da Carta 2  *** \n");//agora se repete o mesmo padrão anterior
    printf(" \n");

    printf("Seu Estado é (coloque A a H): \n");
    scanf(" %c", &Estado);
    
    printf("Digite o código do Estado (coloque A a H seguido do número 01 a 04): \n");
    scanf("%s", Codigo);

    while (getchar() != '\n');  

    printf("Nome da cidade: \n");
    fgets(Cidade, sizeof(Cidade), stdin);

    printf("População da cidade: \n");
    scanf("%d", &Populacao);

    printf("Área da cidade, em kmˆ2: \n");
    scanf("%f", &Area);

    printf("PIB da cidade, em bilhões de reais: \n");
    scanf("%f", &PIB);

    printf("Número de pontos turísticos da cidade: \n");
    scanf("%d", &PontosTur);
    printf(" \n");
    printf(" \n");

    DensPop = Populacao/Area;

    printf ("===*** Carta 2 ***===\n");
    printf ("Estado: %c \n", Estado);
    printf ("Código: %s \n", Codigo);
    printf ("Nome da cidade: %s", Cidade);
    printf ("População: %d \n", Populacao);
    printf ("Área: %0.2f Kmˆ2 \n", Area);
    printf ("PIB: %0.2f bilhões \n", PIB);
    printf ("Número de Pontos Turísticos: %d \n", PontosTur);
    printf ("Densidade Populacional: %.2f hab/kmˆ2 \n", DensPop);


    return 0;
}