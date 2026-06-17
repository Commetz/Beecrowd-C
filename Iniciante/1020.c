#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
 
    int a, horas, minutos, segundos;
    scanf("%d", &a);
    
    horas = a / 365;
    minutos = (a % 365) / 30;
    segundos = ((a % 365) % 30);
    
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", horas, minutos, segundos);
    
    return 0;
}
