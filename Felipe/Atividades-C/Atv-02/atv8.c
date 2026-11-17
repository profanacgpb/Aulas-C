#include <stdio.h>

int main() {
    float valor, desconto, total;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);

    if (valor < 0) {
        printf("Valor invalido!\n");
    } else if (valor < 100) {
        desconto = 0;
        total = valor;
    } else if (valor < 300) {
        desconto = valor * 0.05;
        total = valor - desconto;
    } else if (valor < 500) {
        desconto = valor * 0.10;
        total = valor - desconto;
    } else {
        desconto = valor * 0.15;
        total = valor - desconto;
    }

    if (valor >= 0) {
        printf("Desconto: R$ %.2f\n", desconto);
        printf("Valor final: R$ %.2f\n", total);
    }

    return 0;
}