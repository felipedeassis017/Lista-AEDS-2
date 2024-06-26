#include <stdio.h>
int main()
{
    int n;
    printf("Entre com o valor de um numero: ");
    do{
    scanf("%d", &n);}
    while (n==0);

    if (n%2==0)
    {
        printf("O valor inserido e par");
    } else printf("O valor inserido e impar");
    return 0;
}