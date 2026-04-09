#include <stdio.h>
int main(){
int numero;

printf("Digite um numero:  ");
scanf("%d", &numero);
if (numero > 0)
{
   printf("E esse numero e  positivo. ");
} else if (numero < 0)
{
    printf("Esse numero e negativo: %d", numero);
}

return 0;

}