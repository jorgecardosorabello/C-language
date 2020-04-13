#include <stdio.h>

int main()
{
    int N, R, i, produto;
    printf("Calculo dos arranjos de N, R a R:");
    printf("\nIndique N:");
    scanf("%d", &N);
    printf("Indique R:");
    scanf("%d", &R);
    i=N-R+1, produto=1;

    if(R<N && R>0)
    {
        while(i<=N)
        {
            produto*=i;
            printf("  i=%d; arranjos=%d\n", i, produto);
            i++;
        }
        printf("Resultado: %d\n", produto);
    }
    else
    printf("Erro: N tem de ser maior que R e este maior que 0.");
}