#include <stdio.h>
#include <stdlib.h>

void ex1(){
	//array indice inicia na posição 0
	// vetor
	
	// recebe um numero base
	int i, n[10], maior;
		
	// laco para escrever 100 numeros a partir do numero base
	// entrada de dados 
	for(i=0; i<10; i++){
		printf("Digite um numero %d: ", i+1);
		scanf("%d", &n[i]);
	}
	
	// printa os numeros na ordem inversa que foram lidos
	for(i=9; i>=0; i--){
		printf("numero %d: %d ", i+1, n[i]);
	}
	
	printf("\n\n");
	
	// printa os numeors em ordem decrescente
	for(i=0; i<10; i++){
		for(i=0; i<10; i++){
		
			if(n[i] < n[i+1]){
				maior = n[i+1];
				n[i+1] = n[i];
				n[i] = maior;
			}
		}
	}
	for(i=0; i<10; i++){
		printf("numero %d: %d ", i+1, n[i]);
	}
}

void ex2(){
	double n;
	int exp;
	
	// entrada de dados
	printf("Escreva o numero: ");
	scanf("%lf", &n);
	
	do {
		n = n / 10;
		exp++;
		
	} while(n>10);
	
	if(n==0){
		n = 1;	
	}
	printf("%.1lf x 10^%d", n, exp);
}

int main(int argc, char *argv[]) {
	int option;
	printf("==============\n  MENU DE EX\n==============\n");
	printf("ex1\nex2\n");
	printf("Digite o numero do ex escolhido: ");
	scanf("%d", &option);
	
	switch(option){
		case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
	}
	
	return 0;
}
