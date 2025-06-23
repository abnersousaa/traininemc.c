#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];
    double salario;

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);
    printf("A idade é : %d\n", idade);

    printf("Digite a sua altura:\n ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Qual o seu nome:\n ");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);
    
    printf(" Digite a primeira letra do seu nome:\n");
    scanf(" %c", &opcao);
    printf("A letra é: %c\n", opcao);
    
    
    
    return 0;

}