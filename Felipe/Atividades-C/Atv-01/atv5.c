#include <stdio.h>

int main() {
    int idade;
    char inicial;
    float nota;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a inicial do nome: ");
    scanf(" %c", &inicial);

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    printf("\n--- Cadastro do Estudante ---\n");
    printf("Idade: %d\n", idade);
    printf("Inicial: %c\n", inicial);
    printf("Nota: %.2f\n", nota);

    return 0;
}