#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 26;
    float altura = 1.75;
    char letra = 'C';
    char nome[] = "Abner";
    double salario = 8000.50;
    float alturaEsperada = 1.90;

    printf("A idade do %s é iqual a %d anos de idade\n", nome, idade);
    printf("A alturado do lindo do %s é %.2f\n", nome, altura);
    printf("A letra do %s é %c\n", nome, letra);
    printf("O salário do %s é %.2f\n", nome, salario);
    printf("A altura que eu esperava do %s é %.2f cm\n", nome, alturaEsperada);
    printf("O %s é um rapaz que se esforça muito para receber o salario de %.2f\n e grande parte do dinheiro que ele recebe ele invete em um tratamento para chegar em %.2f\n", nome, salario, alturaEsperada);
    return 0;


}