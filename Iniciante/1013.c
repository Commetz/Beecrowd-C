#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int a, b, c, maio1, maio2;
    scanf("%d %d %d", &a, &b, &c);
    
    maio1 = (a + b + abs(a - b)) / 2;
    maio2 = (maio1 + c + abs(maio1 - c)) / 2;
    
    printf("%d eh o maior\n", maio2);
    return 0;
}
