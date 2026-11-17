#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O numero e positivo.");
    } else if (numero < 0) {
        printf("O numero e negativo.");
    } else {
        printf("O numero e igual a zero.");
    }

    return 0;
}