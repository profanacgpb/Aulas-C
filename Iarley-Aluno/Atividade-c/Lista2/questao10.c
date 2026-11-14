#include <stdio.h>
int main(){
    int senha;

    printf("digite a senha:\n");
    scanf("%d", &senha);

    if (senha==1234){
        printf("acesso permitido\n");
    }
    else{
        printf("acesso negado\n");
    }
    return 0;
}