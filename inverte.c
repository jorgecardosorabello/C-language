#include <stdio.h>
#include <string.h>

/* definir o tamanho máximo de uma string em macros, para assim ser fácil de alterar este valor sem ter de ver todo o código */
#define MAXSTR 255
/* função criar a funcao gets que leia a string*/
void strinv(char *str)
{
    int i, x=0, b, tamanho;
    /* Conta os caracteres de uma string e retorna esse tamanho em um inteiro */
    tamanho = strlen(str);
    char tmp[tamanho];
        for(i=tamanho-1;i>=0;i--)
        {
            tmp[x]=str[i];
            x++;
        }
         /* até aqui, apenas reescreve a string */
         /* e agora será a função que inverterá a string: */
        for(b=0;b<tamanho;b++)
        {
            str[b]=tmp[b];
        }
}
int main()
{
    char str[MAXSTR];
	/* ler a string através da função gets */
    gets(str);
	/* inverter a string */
    strinv(str);
	/* após a execução da função anterior, a string ficou invertida */
    printf("%s",str); 
}