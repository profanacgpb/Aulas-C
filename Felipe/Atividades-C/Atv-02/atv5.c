#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        printf("O maior numero e: %d\n", numero1);
    } else if (numero2 > numero1) {
        printf("O maior numero e: %d\n", numero2);
    } else {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}