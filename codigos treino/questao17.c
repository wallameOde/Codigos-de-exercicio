#include <stdio.h>
int main(){
    int num1, num2;
    
    printf("Digite um numero: ");
    scanf("%d", &num1 );
    printf("Digite outro numero: ");
    scanf("%d", &num2 );

    if ( num1 == num2){
        printf("Sao iguais. \n ");
    }else {
        printf("Sao diferentes.\n ");
    }
    if (num1 > num2 )
    {
        printf( "O numero maior e: %d\n", num1);
    } else if(num2 > num1) {
        printf("O numero maior e : %d\n", num2);
    } else{
        printf("Nao tem maior.");
    }
    
    return 0;
}