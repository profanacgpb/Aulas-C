#include <stdio.h>

int main() {
    float numero1, numero2, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    if (operacao == '+') {
        resultado = numero1 + numero2;
        printf("Resultado: %.2f\n", resultado);
    } else if (operacao == '-') {
        resultado = numero1 - numero2;
        printf("Resultado: %.2f\n", resultado);
    } else if (operacao == '*') {
        resultado = numero1 * numero2;
        printf("Resultado: %.2f\n", resultado);
    } else if (operacao == '/') {
        if (numero2 != 0) {
            resultado = numero1 / numero2;
            printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Erro: divisao por zero!\n");
        }
    } else {
        printf("Operacao invalida!\n");
    }

    return 0;
}