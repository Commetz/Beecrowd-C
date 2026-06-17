#include <stdio.h>
#include <math.h>
 
int main() {
 
    int a;
    scanf("%d", &a);
    double pi = 3.14159, total;
    
    total = (4.0 / 3) * pi * pow(a, 3);
    
    printf("VOLUME = %.3lf\n", total);
 
    return 0;
}
