#include <stdio.h>
unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

/* Na função main ele chama uma variável Sort que ainda não está declarada, portanto devo declarar esta variável aqui. */
void Sort(int vetor[], int N)
{
    int i, j;
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(vetor[j]<vetor[i])
            {
                vetor[j]=vetor[i]+vetor[j];
                vetor[i]=vetor[j]-vetor[i];
                vetor[j]=vetor[j]-vetor[i];
            }
        }
    }

}
int main() {
    int N,i;
    int vetor[1000];
    scanf("%d",&N);
    for(i=0;i<1000;i++)
        vetor[i]=randaux()%(N+1);
    for(i=0;i<10;i++)
        printf("%d ",vetor[i]);
    Sort(vetor,1000);
    printf("\n");
    for(i=0;i<10;i++)
        printf("%d ",vetor[i]);    
}