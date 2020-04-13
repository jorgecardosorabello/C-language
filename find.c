#include <stdio.h>

unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}
int Find(int * vetorInteiros, int tamanho, int numeroAProcurar)
{
    int i;
    for (i=0; i<=tamanho; i++)
    {
        if(numeroAProcurar==vetorInteiros[i])
        {
            return i;
        }
    }
    return -1;
}
int main() {
    int N,i;
    int vetor[1000];
    scanf("%d",&N);
    for(i=0;i<1000;i++)
        vetor[i]=randaux()%(N+1);
    for(i=0;i<10;i++)
        printf("%d ",vetor[i]);
    printf("\n%d",Find(vetor,1000,2));
}