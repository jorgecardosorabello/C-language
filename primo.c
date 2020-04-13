#include <stdio.h>
#include <math.h>

int main()
{
  int N, n, i = 2, primo = 0;

  scanf("%d", &N);
  n = sqrt(N);

    while(i < n)
    {
        if(N % i == 0)
        {
            primo = i;
            break;
        }
    i++;
    }
  
  // print do resultado
  if(primo > 0)
        printf("%d", i);
    else
        printf("0");
  
}