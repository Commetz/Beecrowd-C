#include <stdio.h>
 
int main() {
 
    char a;
    double b, c, total;
    scanf("%s %lf %lf", &a, &b, &c);
    
    total = 0.15 * c + b;
    
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}
