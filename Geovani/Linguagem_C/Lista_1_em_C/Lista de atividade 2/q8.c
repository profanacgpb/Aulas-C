#include <stdio.h>

int main() {
    float valor, desconto, valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);

    if (valor < 0) {
        printf("Valor invalido.");

    } else if (valor < 100) {
        desconto = 0;

    } else if (valor < 300) {
        desconto = 0.05;

    } else if (valor < 500) {
        desconto = 0.10;

    } else {
        desconto = 0.15;
    }

    if (valor >= 0) {
        valorFinal = valor - (valor * desconto);

        printf("Desconto: R$ %.2f\n", valor * desconto);
        printf("Valor final: R$ %.2f", valorFinal);
    }

    return 0;
}