#include <stdio.h>
int main(){
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if(valor == 0){
        printf("O valor e zero. \n");
    } else if(valor > 0){
        printf("Valor digitado e positivo. \n");
    } else {
        printf("Valor digitado e negativo. \n");
    }

    return 0;
}