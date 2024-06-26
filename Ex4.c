#include <stdio.h>

int main() {
    float x, y;
    printf("Digite o valor de x: ");
    scanf("%f", &x);

    if (x < 0) {
        y = x * x + 4;
    } else if (x > 0) {
        y = x * x * x - 3;
    } else {
        printf("Erro: x é igual a 0\n");
        return 1;
    }

    printf("Y = %.2f\n", y);

    return 0;
}