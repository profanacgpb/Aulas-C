#include <stdio.h>

int main(){
    float nota;
    printf("digite a nota (0 a 10) :");
    scanf("%f", &nota);

    if (nota>=9){
        printf("excelente \n");
    }
    else if(nota>=7){
        printf("bom \n");
    }
    else if (nota>=5){
        printf("recuperacao \n");
    }
    else{
        printf("reprovado \n");
    }
    return 0;
}

