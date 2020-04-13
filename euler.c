#include <stdio.h>

int main()
{
    int i,k;
    double euler,fatorial;
    i=0;
    fatorial=1;
    euler=0;
    scanf("%d",&k);

    while(i<=k)
    {
    euler=euler+1/fatorial;
    i++;
    fatorial=fatorial*i;
    }

printf("%.16g",euler);

}