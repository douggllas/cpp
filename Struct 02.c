#include <stdio.h>

typedef struct
{
    int matricula;
    float notas[3];

} Aluno;

void LeAluno(Aluno Turma){
    scanf("%d", &Turma.matricula);
    for (int i = 0; i < 3; i++)
    {
    scanf("%f %f %f", &Turma.notas[i]);
    }
    
}


float CalculaMediaAluno (Aluno Turma){
    int 
}



int main()
{
    float media;
    Aluno Turma[5];

    for (int i = 0; i < 5; i++)
    {
        LeAluno(Turma[i]); // função que lê de teclado
                           // os dados do aluno
    }
    ImprimeTurma(Turma); // Função que imprime os dados de todos os alunos

    for (i = 0; i < 5; i++)
    {
        media = CalculaMediaAluno(.......); // função que calcula a média das notas de um aluno

        printf("Aluno %d  - Media = %f\n"); // imprime os dados do aluno
    }
    return 0;
}