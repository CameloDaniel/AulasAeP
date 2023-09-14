#include <iostream>

int main() {
//ex3
int dias;
float km, total;
    printf("Bem vindo a Locadora de Carros! Quantos kilometros o seu carro percorreu?\n");
    scanf("%f", &km);

    printf("Por quantos dias o carro foi alugado?\n");
    scanf("%d", &dias);

  total = 90 * dias + km / 5;

    printf("O total a se pagar e R$%.2f", total);

return 0;
}