#include <stdio.h>


void devolveMoedas(int * valor, int moeda, char * texto)
{
    int resultado= * valor/moeda; if (resultado>0)
    {
        printf("%s %d\n",texto, resultado);
        *valor-=resultado*moeda;
    }
}
int main()
{
    /* iniciar dois vetores moedas e texto */
    int moedas[]= {1,2,5,10,20,50,100,200};
    char textos[][25]= {"1 centimo:","2 centimos:","5 centimos:","10 centimos:", "20 centimos:","50 centimos:","1 euro:","2 euros:"};
    /* pedir valor ao user */
    float valorFloat;
    scanf("%f",&valorFloat);
    /* converter para € */
    valorFloat*=100;
    /* passar para inteiros */
    int valorInt=(int)valorFloat;
    int i;
    for (i=7;i>=0;i--)
        {
            devolveMoedas(&valorInt, moedas[i], textos[i]);
        }
}