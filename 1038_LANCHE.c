#include <stdio.h>
#include <math.h>

int main()
{
    int cod, quantidade, valor;
    scanf("%d %d", &cod, &quantidade);
    if (cod == 1)
    {
        printf("Total: R$ %.2f\n", 4.00 * quantidade);
    }
    if (cod == 2)
    {
        printf("Total: R$ %.2f\n", 4.50 * quantidade);
    }
    if (cod == 3)
    {
        printf("Total: R$ %.2f\n", 5.00 * quantidade);
    }
    if (cod == 4)
    {
        printf("Total: R$ %.2f\n", 2.00 * quantidade);
    }
    if (cod == 5)
    {
        printf("Total: R$ %.2f\n", 1.50 * quantidade);
    }
    return 0;
}
