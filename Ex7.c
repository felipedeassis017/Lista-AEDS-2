#include <stdio.h>

int main() {
    int num, invertido = 0, original, resto;
    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        resto = num % 10;
        invertido = invertido * 10 + resto;
        num /= 10;
    }

    if (original == invertido) {
        printf("O número é palíndromo\n");
    } else {
        printf("O número não é palíndromo\n");
    }

    return 0;
}