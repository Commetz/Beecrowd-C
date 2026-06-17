#include <stdio.h>
 
int main() {
 
    double a, total;
    int b, c;
    scanf("%d %d %lf", &b, &c, &a);
    
    double a1;
    int b1, c1;
    scanf("%d %d %lf", &b1, &c1, &a1);
    
    total = c * a + c1 * a1;
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}
