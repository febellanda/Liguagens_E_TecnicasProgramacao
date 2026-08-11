#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main(int argc, char *argv[]) {
	float r, areaCirculo;

	printf("Insira o raio do circulo: ");
	scanf("%f", &r);
	
	areaCirculo = pi * (r*r);
	
	printf("A area do cirulo de raio %.1f = %.1f\n", r, areaCirculo);
	
	float b, B, h, areaTrapezio;
	
	printf("\nInsira a base menor do trapezio: ");
	scanf("%f", &b);
	
	printf("Insira a base maior do trapezio: ");
	scanf("%f", &B);
	
	printf("Insira a altura do trapezio: ");
	scanf("%f", &h);
	
	areaTrapezio = ((B + b) * h) / 2;
	
	printf("A area do trapezio de b = %.1f, B = %.1f e h = %.1f e igual a %.1f", b, B, h, areaTrapezio);	
	
	return 0;
}
