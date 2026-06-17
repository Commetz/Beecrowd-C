#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, a1, b1, total;
    scanf("%lf %lf %lf %lf", &a, &b, &a1, &b1);
    
    total = sqrt((pow(b1 - b, 2)) + (pow(a1 - a, 2)));
    printf("%.4lf\n", total);
    
    return 0;
}
