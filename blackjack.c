#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    /* variaveis de Naipes e Números */
    int valor, num, numero, naipe, A, V, D, R, P, O, C, E;
    scanf("%d", &valor);
    /* mostrar a carta que corresponde ao valor */
    num = valor % 13;
    numero = num+1;
    if(num >= 1 && num <= 9)
        printf("%d", numero);
    if(num <= 0)
        printf("A");
    if(num == 10)
        printf("V");
    if(num == 11)
        printf("D");
    if(num == 12)
        printf("R");

    naipe = valor / 13;
    if(naipe == 0)
        printf("P");
    if(naipe == 1)
        printf("O");
    if(naipe == 2)
        printf("C");
    if(naipe == 3)
        printf("E");
}