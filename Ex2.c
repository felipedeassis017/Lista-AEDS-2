#include <stdio.h>
int main()
{
    float p1, p2, p3, m;

    do
    {
        printf("Entre com o valor da primeira prova (0 a 10): \n");
        scanf("%f", &p1);
        if (p1 < 0 || p1 > 10)
        {
            printf("Valor invalido. Por favor, insira um valor entre 0 e 10.\n");
        }
    } while (p1 < 0 || p1 > 10);

    do
    {
        printf("Entre com o valor da segunda prova (0 a 10): \n");
        scanf("%f", &p2);
        if (p2 < 0 || p2 > 10)
        {
            printf("Valor invalido. Por favor, insira um valor entre 0 e 10.\n");
        }
    } while (p2 < 0 || p2 > 10);

    do
    {
        printf("Entre com o valor da terceira prova (0 a 10): \n");
        scanf("%f", &p3);
        if (p3 < 0 || p3 > 10)
        {
            printf("Valor invalido. Por favor, insira um valor entre 0 e 10.\n");
        }
    } while (p3 < 0 || p3 > 10);
    m = (p1 + p2 + p3) / 3;
    printf("A media das tres provas e: %.2f", m);
    if (m >= 6)
    {
        printf("\nO aluno foi aprovado com media de: %.2f", m);
    }
    else
        printf("\nO aluno foi reprovado com media de: %.2f", m);
    return 0;
}