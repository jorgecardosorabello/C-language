#include <stdio.h>

int main()
{
    int Hora, Minuto, Segundos, resultado;
    printf("Calculo do numero de segundos desde o inicio do dia.");
    printf("\nHora: "); scanf("%d", &Hora);
    printf("Minuto: "); scanf("%d", &Minuto);
    printf("Segundos: "); scanf("%d", &Segundos);
    resultado=3600*Hora+60*Minuto+Segundos;
    printf("Numero de segundos desde o inicio do dia: %d", resultado);
}