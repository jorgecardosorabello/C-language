#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int N, M, i=1, j=1;
    /* N sera o numero de linhas, e M o numero de colunas */
    printf("N: ");
    scanf("%d",&N);
    printf("M: ");
    scanf("%d",&M);
    printf("\n");

    /* Mostre um tabuleiro de N linhas e M colunas */

        while(i<=N)
        {
            j=1;
            while(j<=M)
            {
                printf("+");
                j++;
            }
            printf("\n");
            i++;
        }

    return(0);
}