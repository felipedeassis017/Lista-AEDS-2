#include <stdio.h>

int main() {
    float A, B, C, temp;
    printf("Digite três valores: ");
    scanf("%f %f %f", &A, &B, &C);

    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }
    if (A > C) {
        temp = A;
        A = C;
        C = temp;
    }
    if (B > C) {
        temp = B;
        B = C;
        C = temp;
    }

    printf("A = %.2f, B = %.2f, C = %.2f\n", A, B, C);

    return 0;
}