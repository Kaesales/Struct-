#include <stdio.h>

typedef struct {
    int matricula;
    char nome[50];
    float notas[3];
} aluno;

int main() {
    aluno x[3];
    float soma;
    float media[3];
    float maior = 0;

    for (int i = 0; i < 3; i++) {
        soma = 0;
        printf("Matrícula: ");
        scanf("%d", &x[i].matricula);
        getchar();  // Remove o '\n' da entrada

        printf("Nome: ");
        fgets(x[i].nome, 50, stdin);

        for (int j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &x[i].notas[j]);
            soma += x[i].notas[j];
        }

        media[i] = soma / 3;

        if (media[i] > maior) {
            maior = media[i];
        }
    }

    printf("\nAluno(s) com a maior média (%.2f):\n", maior);

    for (int i = 0; i < 3; i++) {
        if (media[i] == maior) {
            printf("\nNome: %s", x[i].nome);
            printf("Matrícula: %d\n", x[i].matricula);
            for (int j = 0; j < 3; j++) {
                printf("Nota %d: %.2f\n", j + 1, x[i].notas[j]);
            }
        }
    }

    return 0;
}
