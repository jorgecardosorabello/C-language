#include <math.h>
#include <stdio.h>
unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}
float Uniforme(int minimo, int maximo)
{
    float devolve, aux;
    aux=randaux()%10000+1;
    devolve=aux/10000;

    if(devolve<minimo||devolve>=maximo)
    {
        return Uniforme(minimo,maximo);
    }
    else
    {
        return devolve;
    }
}
int main()
{
    int i, maximo;
    float top=0;

    scanf("%d", &maximo);
    if(maximo>0)
    {
        float vector[maximo];
        /* Preenchemos o vector */
        for(i=0;i<maximo;i++)
        {
            vector[i]=-log(Uniforme(0,1));

            /* Verificamos o numero mais alto */
            if (vector[i]>top)
            {
                top=vector[i];
            }
        }
        /* Printf dez primeiras posições */
        for(i=0;i<10;i++)
        {
            printf("%.2f ", vector[i]);
        }
        /* Printf valor mais alto */
        printf("\n%.2f", top);
    }
    else
    {
        printf("Valor tem de ser maior do que zero");
    }
}