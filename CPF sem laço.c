#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int cpf1, cpf2, cpf3, cpf4, cpf5, cpf6, cpf7, cpf8, cpf9, cpf10, cpf11, digito1, digito2;
	printf("Digite seu CPF: ");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &cpf1, &cpf2, &cpf3, &cpf4, &cpf5, &cpf6, &cpf7, &cpf8, &cpf9, &cpf10, &cpf11);
	
	digito1 = (((cpf1*10) + (cpf2*9) + (cpf3*8) + (cpf4*7) + (cpf5*6) + (cpf6*5) + (cpf7*4) + (cpf8*3) + (cpf9*2)) * 10) % 11;
	digito2 = (((cpf1*11) + (cpf2*10) + (cpf3*9) + (cpf4*8) + (cpf5*7) + (cpf6*6) + (cpf7*5) + (cpf8*4) + (cpf9*3) + (cpf10*2)) * 10) % 11;
	
	int val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val_digito1, val_digito2;
	printf("Valide seu CPF: ");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &val1, &val2, &val3, &val4, &val5, &val6, &val7, &val8, &val9, &val10, &val11);
	
	val_digito1 = (((val1*10) + (val2*9) + (val3*8) + (val4*7) + (val5*6) + (val6*5) + (val7*4) + (val8*3) + (val9*2)) * 10) % 11;
	val_digito2 = (((val1*11) + (val2*10) + (val3*9) + (val4*8) + (val5*7) + (val6*6) + (val7*5) + (val8*4) + (val9*3) + (val10*2)) * 10) % 11;
	
	if (digito1 == val_digito1 && digito2 == val_digito2) {
		printf("CPF %d%d%d.%d%d%d.%d%d%d-%d%d validado!\n", val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11);
		printf("Digitos verificadores: %d, %d", val_digito1, val_digito2);
	} else {
		printf("CPF invalido!");
	}
	return 0;
}
