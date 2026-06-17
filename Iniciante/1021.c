#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
 
    double a; 
    int a100, a50, a20, a10, a5,a2, a1;
    int a05, a025, a010, a005, a01;
    scanf("%lf", &a);
    int A = (int)(a * 100 + 0.5);
    
    a100 = A / 10000;
    A %= 10000;
    a50 = A / 5000;
    A %= 5000;
    a20 = A / 2000;
    A %= 2000;
    a10 = A / 1000;
    A %= 1000;
    a5 = A / 500;
    A %= 500;
    a2 = A / 200;
    A %= 200;
    a1 = A / 100;
    A %= 100;
    a05 = A / 50;
    A %= 50;
    a025 = A / 25;
    A %= 25;
    a010 = A / 10;
    A %= 10;
    a005 = A / 5;
    A %= 5;
    a01 = A / 1;
    A %= 1;
    
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", a100, a50, a20, a10, a5, a2, a1, a05, a025, a010, a005, a01);
    
    return 0;
}
