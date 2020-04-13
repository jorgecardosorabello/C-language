#include <stdio.h>

int mod(int x, int y)
{
    return x%y;
}
int mdc(int x, int y)
{
    if(y==0)
    {
        return x;
    }
    else;
    {
        int aux=mod(x,y);
        return mdc(y,aux);
    }
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",mdc(x,y));
}