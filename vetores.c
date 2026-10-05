#include <stdio.h>
#include <stdlib.h>

int comparar(int a, int b){
	if(a < b) return b;
	else return a;
}

int main(int argc, char *argv[]) {
	int valores[10];
	int maior, menor, i;
	
	printf("Valores: \n");
	// for(inicializa; verificação; incremento)
	for(i=0; i<10; i++){
		scanf("%d", &valores[i]);
	}
	return 0;
}
