#include <iostream>

int main() {
  //ex2
  char nome[100];
  int idade;
    
    printf("Qual o seu nome?\n");
    scanf("%s", nome);

    printf("Qual a sua idade?\n");
    scanf("%d", &idade);

    printf("Oie, %s! Voce tem %d anos!", nome, idade);

  return 0;
}