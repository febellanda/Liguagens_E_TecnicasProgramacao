#include <stdio.h>

int main(int argc, char *argv[]){
    int selecao;
    do {
    //  Menu para seleção de um exercício da lista

        printf("\n--- LISTA 1 ---\n\n");
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
            case 1: // Programa pede dois valores e printa eles ao contrário usando uma váriavel auxiliar
                
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
            
            case 2: // Programa pede um número ao usuário e o retorna em notação científica
                
                printf("\n- EXERCÍCIO 2 -\n\n");
    
                double notacao;
                int exp;

                printf("Insira um valor para ser transformado em notação científica: ");
                scanf("%lf", &notacao);

                while(notacao > 10){
                    notacao = notacao / 10;
                    exp++;
                }
                printf("Notação científica: %.2lfx10^%d\n", notacao, exp);
        
            case 3: // Programa lê um número positivo ate 64 e retorna o mesmo em binário
                
                printf("\n- EXERCÍCIO 3 -\n\n");
    
                int bit1, bit2, bit3, bit4, bit5, bit6, bit7, num;

                printf("Insira um número positivo até 64 para conversão binária: ");
                scanf("%d", &num);

                bit7 = num% 2;
                num = num/2;
                
                bit6 = num% 2;
                num = num/2;
                
                bit5 = num% 2;
                num = num/ 2; 
                
                bit4 = num% 2;
                num = num / 2; 

                bit3 = num % 2;
                num = num / 2; 

                bit2 = num % 2;
                num = num / 2; 

                bit1 = num % 2;
                num = num / 2; 

                printf("Número em binário: %d%d%d%d%d%d%d\n", bit1, bit2, bit3, bit4, bit5, bit6, bit7);

            case 4: // Programa calcula o salário total com a comissão de um vendedor
                
                printf("\n- EXERCÍCIO 4 -\n\n");
    
                float salario_fixo, total_vendas, comissao, valor_em_comissao, salario_mes;
                comissao = 0.15;
                
                printf("Insira o salário fixo: ");
                scanf("%f", &salario_fixo);

                printf("Insira o valor total em vendas no mês: ");
                scanf("%f", &total_vendas);

                valor_em_comissao = comissao * total_vendas;
                salario_mes = valor_em_comissao + salario_fixo;
                printf("Esse mês seu salário é de %.2f\n", salario_mes);
        }   
    } while(selecao != 0);

    printf("Até logo!");
    

   return 0;
}
   return 0;
}
