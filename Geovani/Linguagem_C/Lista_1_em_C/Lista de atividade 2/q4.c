#include <stdio.h>

int main() {
    float media;

    printf("Digite sua media: ");
    scanf("%f", &media);

    if (media >= 7) {
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }

    return 0;
}