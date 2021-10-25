#include <stdio.h>
#include "functions.h"

int main() {

	int f;
	double x, eps;
	printf("Choose a function(exp - 1 ln - 2 cos - 3 sh - 4 arctg - 5) ");
	scanf_s("%d", &f);
	printf("enter x and accuracy: ");
	scanf_s("%lf %lf", &x, &eps);

	if (f == 1) printf("%lf", exp(x, eps));
	else if (f == 2) printf("%lf", ln(x, eps));
	else if (f == 3) printf("%lf", cos(x, eps));
	else if (f == 4) printf("%lf", sh(x, eps));
	else if (f == 5) printf("%lf", arctg(x, eps));
	else printf("wrong number");

	return 0;
}


