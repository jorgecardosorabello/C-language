#include <stdio.h>

int main()
{
    int N, factorial=1, i=1;
    printf("Calculo do produto dos primeiros N numeros.\nIndique N:");
    scanf("%d", &N);
      while(i<=N)
        {
            factorial*=i*1;
            printf("  Factorial(%d)=%d\n", i, factorial);
              i=i+1;
        }
    printf("Resultado: %d", factorial);
}

