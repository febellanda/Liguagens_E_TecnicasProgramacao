#include <stdio.h>
#include <math.h>

// Programa pede dois valores e printa eles ao contrário usando uma váriavel auxiliar

int main(int argc, char *argv[]) {
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

// Programa pede um número ao usuário e o retorna em notação científica
    
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
    
//  Programa lê um número positivo ate 64 e retorna o mesmo em binário

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

// Programa calcula o salário total com a comissão de um vendedor

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

// Programa pede 4 valores ao usuário e mostra algumas opeações com os valores

    printf("\n- EXERCÍCIO 5 -\n\n");
    
    float val1, val2, val3, val4, soma, media, produto;
    printf("Valor 1: ");
    scanf("%f", &val1);

    printf("Valor 2: ");
    scanf("%f", &val2);

    printf("Valor 3: ");
    scanf("%f", &val3);

    printf("Valor 4: ");
    scanf("%f", &val4);

    soma = val1 + val2 + val3 + val4;
    media = (val1 + val2 + val3 + val4) / 4;
    produto = val1 * val2 * val3 * val4;

    printf("\nSoma = %.2f\nMédia = %.2f\nProduto = %.2f\n", soma, media, produto);

// Programa lê uma idade em dias e retorna a mesma em anos e meses

    printf("\n- EXERCÍCIO 6 -");

    int idade_dias, meses, anos, dias;
    printf("Insira sua idade em dias: ");
    scanf("%d", &idade_dias);

    anos = idade_dias / 365;
    meses = (idade_dias % 365) / 30;
    dias = (idade_dias % 365) % 30;

    printf("Você tem %d anos, %d meses e %d dias\n", anos, meses, dias);

// Programa calcula o volume de uma esfera

    printf("\n- EXERCÍCIO 7 -\n\n");

    float raio, pi, volume_esfera;
    pi = 3.14159;
    printf("Insira o raio para o cálculo do volume da esfera: ");
    scanf("%f", &raio);

    volume_esfera = (4.0/3) * pi * pow(raio, 3);
    printf("Volume = %.2f\n", volume_esfera);
    
// Programa aplica distância euclidiana com os pontos escolhidos pelo usuário 

    printf("\n- EXERCÍCIO 8-\n\n");

    int x1, y1, x2, y2, quad1, quad2;
    float dist_euclid;

    printf("Insira os pontos da primeira coordenada: ");
    scanf("%d %d", &x1, &y1);

    printf("Insira os pontos da segunda coordenada: ");
    scanf("%d %d", &x2, &y2);

    quad1 = x2 - x1;
    quad2 = y2 - y1;

    dist_euclid = sqrt(pow(quad1, 2) + pow(quad2, 2));
    printf("Distância euclidiana = %.2f\n", dist_euclid);

    return 0;
}
