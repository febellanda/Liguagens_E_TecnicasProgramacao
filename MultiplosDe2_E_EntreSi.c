#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b;
	printf("Insira os valores: ");
	scanf("%d %d", &a, &b);
	
	if(a>0 && b>0){		
		if(a%2 == 0 && b%2 == 0){
			printf("Os valores %d e %d sao multiplos de 2\n", a, b);
		} else {
			printf("Pelo menos um dos valores %d e %d nao e multiplo de 2\n", a, b);
		}
		
		if(a%b == 0 || b%a == 0){
			printf("Os valores %d e %d sao multiplos entre si\n", a, b);
		} else {
			printf("Os valores %d e %d nao sao multiplos entres si\n", a, b);
		}
	}
	
	return 0;
}
