#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, c, maior;
	printf("insira os valores de a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b){
		maior = a;
	} else {
		maior = b;
	}
	
	if(c>maior){
		maior = c;
	}
	
	printf("O maior: %d", maior);
	return 0;
}
