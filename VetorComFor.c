#include <stdio.h>
#include <stdlib.h>

int compararMaior(int a, int b){
	if(a < b) return b;
	else return a;
}

int compararMenor(int a, int b){
    if(a < b) return a;
    else return b;
}

int main(int argc, char *argv[]) {
	int valores[10];
	int maior, menor, i;
	
	printf("Valores: \n");
	// for(inicializa; verifica??o; incremento)
	for(i=0; i<10; i++){
		scanf("%d", &valores[i]);
	}
	
	maior = valores[0];
	for(i=1; i<5; i+=2){
	    int maior_temp = compararMaior(valores[i], valores[i+1]);
	    maior = compararMaior(maior_temp, maior);
	}    
	menor = valores[5];
	for(i=6; i<9; i+=2){
	    int menor_temp = compararMenor(valores[i], valores[i+1]);
	    menor = compararMenor(menor_temp, menor);
	}
	
    printf("maior: |%d|\n", maior);
    printf("menor: |%d|\n", menor);
	
	return 0;
}
