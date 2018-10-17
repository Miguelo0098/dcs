#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double resolverEcuacionpos(double a, double b, double c){
	double dividendo = -b + sqrt(b*b-4*a*c);
	double divisor = 2*a;
	return dividendo/divisor;
}

double resolverEcuacionneg(double a, double b, double c){
	double dividendo = -b - sqrt(b*b-4*a*c);
	double divisor = 2*a;
	return dividendo/divisor;
}

int main(int argc, char const *argv[])
{
	if (argc < 2)
	{
		printf("ERROR: no se han introducido los parámetros necesarios\n");
		exit(-1);
	}

	double a, b, c;
	a = atol(argv[1]);
	b = atol(argv[2]);
	c = atol(argv[3]);

	printf("ECUACIÓN: %lfx^2 + %lfx + %lf = 0\n", a, b, c);
	printf("RESULTADOS: \n");
	printf("A) %lf\n", resolverEcuacionpos(a, b, c));
	printf("B) %lf\n", resolverEcuacionneg(a, b, c));



	return 0;
}