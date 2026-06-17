#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

	double a, b, c, d;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

	if ((2 * a + 3 * b + 4 * c + 1 * d) / 10 < 7.0 && (2 * a + 3 * b + 4 * c + 1 * d) / 10 >= 5.0) {
		printf("Media: %.1lf\n", (2 * a + 3 * b + 4 * c + 1 * d) / 10);
		printf("Aluno em exame.\n");
		double e;
		scanf("%lf", &e);
		printf("Nota do exame: %.1lf\n", e);
		if ((((2 * a + 3 * b + 4 * c + 1 * d) / 10) + e) / 2 >= 5.0) {
			printf("Aluno aprovado.\n");
			printf("Media final: %.1lf\n", (((2 * a + 3 * b + 4 * c + 1 * d) / 10) + e) / 2);
		} else {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", (((2 * a + 3 * b + 4 * c + 1 * d) / 10) + e) / 2);
		}

	} 
	else if ((2 * a + 3 * b + 4 * c + 1 * d) / 10 >= 7.0) {
		printf("Media: %.1lf\n", (2 * a + 3 * b + 4 * c + 1 * d) / 10);
		printf("Aluno aprovado.\n");
	} else {
	    printf("Media: %.1lf\n", (2 * a + 3 * b + 4 * c + 1 * d) / 10);
		printf("Aluno reprovado.\n");
	}

	return 0;
}
