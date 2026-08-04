// Programa que calcula a área de um triângulo retângulo

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float base, altura, area_triangulo;
	
	base = 5;
	altura = 4;
	area_triangulo = (base*altura)/2;
	
	printf("A area do triangulo de base %f e altura %f = %f", base, altura, area_triangulo);
	
	return 0;
}
