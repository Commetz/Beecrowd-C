#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, c, q, t, ci, tr, r;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    t = (a * c) / 2;
    ci = 3.14159 * pow(c, 2);
    tr = (a + b) * c / 2;
    q = b * b;
    r = a * b;
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", t, ci, tr, q, r);
 
    return 0;
}
