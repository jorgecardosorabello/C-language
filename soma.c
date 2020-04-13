#include <stdio.h>

int main()
{
    int N, parcial=0, i=0;
    printf("Calculo da soma dos primeiros N numeros.\nIndique N:");
    scanf("%d", &N);
      while(i<N)
        {
     parcial+=i+1;
     i=i+1;
     printf("\n  adicionar %d, parcial %d", i, parcial);
        }
    printf("\nTotal: %d\n", parcial);
}