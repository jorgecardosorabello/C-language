#include <stdio.h>

int main()
{
    //Missao: Calcular o valor da Funcao Fibonacci (definacao da funcao nao padrao), para um dado argumento N. Para N=1 ou 2, deve retornar N, caso contrario retorna a soma dos dois valores anteriores//
    printf("Calculo do valor da funcao Fibonacci:");
    int n;
    printf("\nIndique N:");
    scanf("%d\n", &n);
    int a,b;

    if (n<=2)
    {
        printf("  Fib(%d)=%d\n",n,n);
        a=n;
    }
    else
    {
        a=2;
        b=1;
        int i=3;
        while(i<=n)
        {
        a+=b;
        printf("  Fib(%d)=%d\n",i,a);
        b=a-b;
        i++;
        }
    }
    printf("Resultado: %d",a);
}