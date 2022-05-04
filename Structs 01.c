#include <stdio.h>
#include <stdlib.h>

typedef struct idade
{
    int mes, dia, ano;
};

typedef struct
{
    char nome[50];
    char endereco[40];
    int Id;
} cadastro;

int main()
{
    char nome[50], ender[40];
    cadastro A, B;
    struct idade ID;

    setbuf(stdin, NULL);
    scanf("%s %s", A.nome, B.nome);
    setbuf(stdin, NULL);
    scanf("%s %s", A.endereco, B.endereco);
    setbuf(stdin, NULL);
    scanf("%d %d", &A.Id, &B.Id);
    setbuf(stdin, NULL);

    printf("\n%s \n%s", A.nome, B.nome);
    printf("\n%s \n%s", A.endereco, B.endereco);
    printf("\n%d \n%d", A.Id, B.Id);
};
