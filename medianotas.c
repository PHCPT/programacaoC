#include <stdio.h>

int main() {
    float nota1, nota2, nota3, resultado;

        printf ("Digite a nota 1: \n");
    scanf ("%f", &nota1);

    printf ("Digite a nota 2: \n");
    scanf ("%f", &nota2);

    printf ("Digite a nota 3: \n");
    scanf ("%f", &nota3);

    resultado = (nota1 + nota2 + nota3)/3;

    printf ("O resultado da média é: %f pontos \n", resultado);
    
}