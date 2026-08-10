#include <stdio.h>
#include <math.h>

int main() {
    double raio;
    scanf("%lf", &raio);
    double area = pow(raio, 2) * 3.14159;
    
    printf("A=%.4f\n", area);
    return 0;
}
