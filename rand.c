#include <stdio.h>

#define RAND_A 231533
#define RAND_B 82571
#define RAND_M 428573
unsigned int seed=0;

unsigned rand()
{
    seed=(RAND_A*seed+RAND_B)%RAND_M;
    return seed;
}
int main() {
    int N,i;
    scanf("%d",&seed);
    scanf("%d",&N);
    
    for(i=0;i<10;i++)
        printf("%d ",rand()%(N+1));
}