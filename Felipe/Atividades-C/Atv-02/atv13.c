#include <stdio.h>

int main() {
    float salario, parcela;

    printf("Digite o salario mensal: R$ ");
    scanf("%f", &salario);

    printf("Digite o valor da parcela: R$ ");
    scanf("%f", &parcela);

    if (salario <= 0 || parcela <= 0) {
        printf("Valores invalidos!\n");
    } else if (parcela <= salario * 0.30) {
        printf("Emprestimo aprovado!\n");
    } else {
        printf("Emprestimo negado!\n");
    }

    return 0;
}