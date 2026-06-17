#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
 
    int a, horas, minutos, segundos;
    scanf("%d", &a);
    
    horas = a / 3600;
    minutos = (a % 3600) / 60;
    segundos = ((a % 360) % 60);
    
    
    printf("%d:%d:%d\n", horas, minutos, segundos);
    
    return 0;
}
