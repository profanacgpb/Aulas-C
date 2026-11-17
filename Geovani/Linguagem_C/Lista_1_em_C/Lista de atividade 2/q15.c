#include <stdio.h>

int main() {
    int usuario, senha;

    printf("Digite o codigo de usuario: ");
    scanf("%d", &usuario);

    printf("Digite sua senha: ");
    scanf("%d", &senha);

    if (usuario != 2026) {
        printf("Usuario incorreto.");

    } else if (senha != 1234) {
        printf("Senha incorreta.");

    } else {
        printf("Login realizado com sucesso!");
    }

    return 0;
}