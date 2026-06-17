#include <stdio.h>
 
int main() {
 
    double a, b;
    scanf("%lf %lf", &a, &b);
    double total;
    
    total = (b * a) / 12;
    
    printf("%.3lf\n", total);
    
    return 0;
}
