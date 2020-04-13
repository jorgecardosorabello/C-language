#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    /* definição da string */
    char string[255];
    gets (string);
    /* criar variáveis */

    char espaco[2]=" ";
    char * token;
    double valorConvertido=0;

    /* chamar função para obter primeiro token */
    token=strtok(string,espaco);

    /* procurar outros tokens */
    while(token!=NULL)
    {
        /* printf("%s", token); */
        valorConvertido+=atof(token);
        token=strtok(NULL, espaco);
    }
    printf("%.15g",valorConvertido);
}