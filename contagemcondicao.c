#include <stdio.h>

int main()
{
  int A,B,K,contagem;
  printf("Indique K: ");
  scanf("%d",&K);
  contagem=0;
  /* Calculo do número de pares de inteiros que respeitam uma determinada condição */
for(A=1; A<=K; A++)
    for(B=1; B<=K; B++)
        if(A+B<=K && A*B<=K)
            contagem++;

  printf("Total: %d",contagem);
} 