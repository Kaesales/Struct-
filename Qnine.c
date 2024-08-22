#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
} Atleta;

int main() {
    Atleta atletas[5];
    Atleta maisVelho, maisAlto;

    for (int i = 0; i < 5; i++) {
        printf("Nome do atleta %d: ", i + 1);
        fgets(atletas[i].nome, 50, stdin);
        atletas[i].nome[strcspn(atletas[i].nome, "\n")] = '\0';

        printf("Esporte: ");
        fgets(atletas[i].esporte, 50, stdin);
        atletas[i].esporte[strcspn(atletas[i].esporte, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &atletas[i].idade);

        printf("Altura (em metros): ");
        scanf("%f", &atletas[i].altura);
        getchar();

        if (i == 0) {
            maisVelho = atletas[i];
            maisAlto = atletas[i];
        } else {
            if (atletas[i].idade > maisVelho.idade) {
                maisVelho = atletas[i];
            }
            if (atletas[i].altura > maisAlto.altura) {
                maisAlto = atletas[i];
            }
        }
    }

    printf("\nAtleta mais velho: %s\n", maisVelho.nome);
    printf("Idade: %d\n", maisVelho.idade);

    printf("\nAtleta mais alto: %s\n", maisAlto.nome);
    printf("Altura: %.2f metros\n", maisAlto.altura);

    return 0;
}
