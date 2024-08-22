#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int dia;
    int mes;
    int ano;
} Pessoa;

int comparaData(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2) {
    if (ano1 != ano2) return ano1 - ano2;
    if (mes1 != mes2) return mes1 - mes2;
    return dia1 - dia2;
}

int main() {
    Pessoa pessoas[6];
    Pessoa maisVelha, maisNova;

    for (int i = 0; i < 6; i++) {
        printf("Nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, 50, stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

        printf("Dia de nascimento: ");
        scanf("%d", &pessoas[i].dia);
        printf("Mês de nascimento: ");
        scanf("%d", &pessoas[i].mes);
        printf("Ano de nascimento: ");
        scanf("%d", &pessoas[i].ano);
        getchar();

        if (i == 0) {
            maisVelha = pessoas[i];
            maisNova = pessoas[i];
        } else {
            if (comparaData(pessoas[i].dia, pessoas[i].mes, pessoas[i].ano, maisVelha.dia, maisVelha.mes, maisVelha.ano) < 0) {
                maisVelha = pessoas[i];
            }
            if (comparaData(pessoas[i].dia, pessoas[i].mes, pessoas[i].ano, maisNova.dia, maisNova.mes, maisNova.ano) > 0) {
                maisNova = pessoas[i];
            }
        }
    }

    printf("\nPessoa mais velha: %s\n", maisVelha.nome);
    printf("Data de nascimento: %02d/%02d/%04d\n", maisVelha.dia, maisVelha.mes, maisVelha.ano);

    printf("\nPessoa mais nova: %s\n", maisNova.nome);
    printf("Data de nascimento: %02d/%02d/%04d\n", maisNova.dia, maisNova.mes, maisNova.ano);

    return 0;
}
