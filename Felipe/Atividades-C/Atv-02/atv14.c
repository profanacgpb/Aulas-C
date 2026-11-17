#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o terceiro lado: ");
    scanf("%f", &lado3);

    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        printf("Lados invalidos!\n");
    } else if (lado1 + lado2 <= lado3 ||
               lado1 + lado3 <= lado2 ||
               lado2 + lado3 <= lado1) {

        printf("Os lados nao formam um triangulo.\n");

    } else if (lado1 == lado2 && lado2 == lado3) {
        printf("Triangulo equilatero.\n");
    } else if (lado1 == lado2 ||
               lado1 == lado3 ||
               lado2 == lado3) {

        printf("Triangulo isosceles.\n");

    } else {
        printf("Triangulo escaleno.\n");
    }

    return 0;
}