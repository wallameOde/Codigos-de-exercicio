#include <stdio.h>
int main(){
    int l1,l2,l3;
  
   printf("Digite o valor de um dos lados do triangulo:  ");
   scanf("%d", &l1);
    printf("Digite o valor de outro  lado do triangulo:  ");
   scanf("%d", &l2);
    printf("Digite o valor do lado  do triangulo que restava: ");
   scanf("%d", &l3);

   if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2)
   {
    printf("E um triangulo");
    if ( l1 == l2 && l2 == l3)
    {
        printf("E um triangulo equilatero.");
    }else if (l1 != l2 && l2 != l3 )
    {
         printf("E um triangulo escaleno.");
    }else
    {
        printf("E um isoceles.");
    } else{
        putchar("Nao e um triangulo. ");
    }
   }
    return 0;

}