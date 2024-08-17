#include <stdio.h>

typedef struct{
  char nome[100];
  char end[100];
  int idade;

}dados;

int main(){
dados ps_one;

printf("Nome:");
scanf("%[^\n]", ps_one.nome);

printf("Idade:");
scanf("%d", &ps_one.idade);
getchar();

printf("Endereço:");
scanf("%[^\n]", ps_one.end);


printf("Nome - %s, Idade - %d, Endereço - %s",ps_one.nome, ps_one.idade, ps_one.end);

return 0;
}