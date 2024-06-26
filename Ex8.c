#include <stdio.h>

int main() {
    float num1, num2, resultado;
    printf("Digite dois números (o segundo deve ser diferente de zero): ");
    scanf("%f %f", &num1, &num2);

    if (num2 == 0) {
        printf("Erro: o segundo número é zero\n");
        return 1;
    }

    resultado = num1 / num2;
    printf("Resultado: %.2f\n", resultado);

    return 0;
}