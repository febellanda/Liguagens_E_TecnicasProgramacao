#include <stdio.h>
int main(int argc, char *argv[]){
    int selecao;
    do {
        printf("\n--- MENU ---\n\n");
        printf("Ex. 1 ----- 1\n");
        printf("Ex. 2 ----- 2\n");
        printf("Ex. 3 ----- 3\n");
        printf("Ex. 4 ----- 4\n");
        printf("Ex. 5 ----- 5\n");
        printf("Ex. 6 ----- 6\n");
        printf("Ex. 7 ----- 7\n");
        printf("Ex. 8 ----- 8\n");
        printf("Sair ------ 0\n\n");
        printf("Escolha um exercício da lista 1: ");
        scanf("%d", &selecao);
        printf("\n");

        switch(selecao){
            case 1:
                printf("- EXERCÍCIO 1 -\n\n");
        
                int num1, num2, aux; 
        
                printf("Insira um número: ");
                scanf("%d", &num1);

                printf("Insira outro número: ");
                scanf("%d", &num2);

                aux = num1;
                num1 = num2;
                num2 = aux;

                printf("%d, %d\n", num1, num2);
                break;
        }
    } while(selecao != 0);
    

   return 0;
}
