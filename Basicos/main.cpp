#include <iostream>

int main() {
  char nome[100];
  printf("Qual o seu nome?\n")
  scanf("%s", &nome);

  printf("Oie, %s", nome);

  return 0;
}