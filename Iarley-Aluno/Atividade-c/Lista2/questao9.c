#include <stdio.h>

int main(){
    int idade;
    
    printf("digite a idade:");
    scanf("%d", &idade);

    if (idade<0){
        printf("idade invalida\n");
    }
    else if(idade <=12){
        printf("crianca\n");
    }
    else if (idade<=17){
        printf("adolescente\n");
    }
    else if (idade<=57){
        printf("adulto \n");
    }
    else{
        printf("idoso \n");
    }
      
    return 0;
}