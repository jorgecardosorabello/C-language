#include <stdio.h>
unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

/* A função void Sort gera os numeros */
void Sort(int vetor[], int N)
{
    int i, j, aux;
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(vetor[i]>vetor[j])
            {
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
    }
}
/* A função void RemoveDups remove o que estiver duplicado */
void RemoveDups(int vetor[], int N)
{
    int i, j, k;
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            while(vetor[i]==vetor[j])
            {
                for(k=j;k<N;k++)
                {
                    vetor[k]=vetor[k+1];
                }
                N--;
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
    RemoveDups(vetor,1000);
    printf("\n");
    for(i=0;i<10;i++)
        printf("%d ",vetor[i]);    
}