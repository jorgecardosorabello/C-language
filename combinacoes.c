#include <stdio.h>

int main()
{

    int N, R, parcial, resultado, i=1, x, y=1;
    printf("Calculo das combinacoes de N, R a R:\n");
    printf("Indique N:");
    scanf("%d", &N);
    printf("Indique R:");
    scanf("%d\n", &R);

    N=N-R+1;
    while(i<=R)
    {
    parcial=y*N;
    resultado=parcial/i;
    printf("  %d*%d=%d, %d/%d=%d\n", y, N, parcial, parcial, i, resultado);
    y=resultado;
    i++;
    N++;
    }
    printf("Resultado: %d\n", resultado);