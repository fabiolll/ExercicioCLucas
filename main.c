#include <stdio.h>

int teste()
{
    int valor;
    printf("Digite o numero de alunos (maximo 50): ");
    scanf("%d", &valor);
    return valor;
}

int main()
{
    int num_turmas;

    printf("Digite o numero de turmas: ");
    scanf("%d", &num_turmas);

    for (int t = 1; t <= num_turmas; t++)
    {
        int num_alunos;
        float soma = 0, media;

        printf("\nTurma %d:\n", t);
        printf("Digite o numero de alunos (maximo 50): ");
        scanf("%d", &num_alunos);

        while (num_alunos > 50)
        {

            printf("O numero de alunos excede o limite maximo (50).\n");
            num_alunos = teste();
        }

        printf("Digite as notas dos alunos:\n");
        for (int i = 0; i < num_alunos; i++)
        {
            float nota;
            printf("Nota do aluno %d: ", i + 1);
            scanf("%f", &nota);
            soma += nota;
        }

        media = soma / num_alunos;

        printf("A media das notas da Turma %d e: %.2f\n", t, media);
    }

    return 0;
}
