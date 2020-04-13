#include <stdio.h>

int main()
{
printf("Introduza um montante em euros, podendo ter centimos: ");

int Moeda2Euros, Moeda1Euro, Moeda50Centimos, Moeda20Centimos, Moeda10Centimos, Moeda05Centimos, Moeda02Centimos, Moeda01Centimos;
float Montante;
int montante2, montante1, montante50, montante20, montante10, montante05, montante02, montante01;

scanf("%f", &Montante);

int QuantiaEmCentimos = Montante*100;


Moeda2Euros = QuantiaEmCentimos/200;
montante2= QuantiaEmCentimos-200*Moeda2Euros;
    if(Moeda2Euros>0)
    printf("2 euros: %d\n", Moeda2Euros);

Moeda1Euro = montante2/100;
montante1=montante2 - 100*Moeda1Euro;
    if(Moeda1Euro>0)
    printf("1 euro: %d\n", Moeda1Euro);

Moeda50Centimos=montante1/50;
montante50=montante1-50*Moeda50Centimos;
    if(Moeda50Centimos>0)
    printf("50 centimos: %d\n", Moeda50Centimos);

Moeda20Centimos=montante50/20;
montante20=montante50-20*Moeda20Centimos;
    if(Moeda20Centimos>0)
    printf("20 centimos: %d\n", Moeda20Centimos);

Moeda10Centimos=montante20/10;
montante10=montante20-10*Moeda10Centimos;
    if(Moeda10Centimos>0)
    printf("10 centimos: %d\n", Moeda10Centimos);

Moeda05Centimos=montante10/5;
montante05=montante10-5*Moeda05Centimos;
    if(Moeda05Centimos>0)
    printf("5 centimos: %d\n", Moeda05Centimos);

Moeda02Centimos=montante05/2;
montante02=montante05-2*Moeda02Centimos;
    if(Moeda02Centimos>0)
    printf("2 centimos: %d\n", Moeda02Centimos);

Moeda01Centimos=montante02/1;
montante01=montante02-1*Moeda01Centimos;
    if(Moeda01Centimos>0)
    printf("1 centimo: %d", Moeda01Centimos);
