#include <stdio.h>

int main() {
    float salario, parcela;

    printf("Digite seu salario: R$ ");
    scanf("%f", &salario);

    printf("Digite o valor da parcela: R$ ");
    scanf("%f", &parcela);

    if (salario <= 0 || parcela <= 0) {
        printf("Valores invalidos.");

    } else if (parcela <= salario * 0.30) {
        printf("Emprestimo aprovado.");

    } else {
        printf("Emprestimo negado.");
    }

    return 0;
}