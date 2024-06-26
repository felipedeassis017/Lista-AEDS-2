#include <stdio.h>

int main() {
    float temperatura;
    printf("Digite a temperatura da água: ");
    scanf("%f", &temperatura);

    if (temperatura <= 0) {
        printf("Estado: Sólido\n");
    } else if (temperatura >= 100) {
        printf("Estado: Gasoso\n");
    } else {
        printf("Estado: Líquido\n");
    }

    return 0;
}