#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	printf("Insira uma letra: ");
	char letra = getchar();
		
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		if(letra == 'a' || letra == 'o'){
			printf("aoba");
		} else if(letra == 'i' || letra == 'u'){
			printf("La ele");
		} else {
			printf("67");
		}
	} else {
		printf("67");
	}
	
	return 0;
}
