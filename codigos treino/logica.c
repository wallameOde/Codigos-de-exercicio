#include <stdio.h>
int main(){
    int l1,l2,l3;
    printf("digite um valor: \n");
    scanf("%d", &l1);
     printf("digite um valor: \n");
    scanf("%d", &l2);
     printf("digite um valor: \n");
    scanf("%d", &l3);

    if((l1<l2 + l3)&&(l2< l1 + l3)&&(l3< l1 + l2)){
        printf("temos um triangulo. \n");
        if ((l1==l2)&&(l2==l3))
        {
          printf("temos um triangulo equilatero ");
        }else
        if((l1!= l2)&&(l1!= l3)&&(l3!=l2)){
             printf("temos um triangulo escaleno ");
        }else{
                printf("temos um triangulo isoceles ");
             }
             
    }

        else{
        printf("nao temos um triangulo. \n");
    };
    return 0;

}