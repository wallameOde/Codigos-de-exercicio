#include<stdio.h>
int main(){
    int numeros[5];
    int i;
   for ( i = 0; i < 5; i++){
    printf(" Digite o numero %d: ", i+1);
    scanf("%d", &numeros[i]);
   }
for ( i = 0; i < 5; i++){
    if (numeros[i] >= 100 && numeros[i] <= 200)
    {
        printf("voce digitou o numero %d que esta entre 100 e 200", numeros[i]);
    } else
    {
        printf("voce digitou o numero %d que nao esta entre 100 e 200", numeros[i]);
    }
    
}

    return 0;

}