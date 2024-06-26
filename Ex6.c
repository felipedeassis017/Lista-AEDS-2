#include <stdio.h>

int main() {
    int X, Y, Z;
    printf("Digite três números inteiros (X, Y, Z): ");
    scanf("%d %d %d", &X, &Y, &Z);

    if (X % Y == 0 && X % Z == 0) {
        printf("O número é divisível por Y e Z\n");
    } else if (X % Y == 0) {
        printf("O número é divisível por Y mas não por Z\n");
    } else if (X % Z == 0) {
        printf("O número é divisível por Z mas não por Y\n");
    } else {
        printf("O número não é divisível nem por Y nem por Z\n");
    }

    return 0;
}