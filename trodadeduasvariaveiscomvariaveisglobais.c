#include <stdio.h>

/* variaveis globais */

int x=123, y=321;

void Troca()
{
    int aux=x;
    x=y;
    y=aux;
}
int main()
{
  Troca();
  printf("x: %d y: %d",x,y);
}