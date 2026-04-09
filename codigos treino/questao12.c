#include <stdio.h>
int main(){
    int a=7, b = 8, c = 9;
    int d = 4,i = 5,f = 6;
    float media1, resultado1;
    float media2,resultado2;
    float mediaend;
 

    media1= a + b + c;
    resultado1 = media1 / 3;

    media2 = d + i + f;
    resultado2 = media2 / 3;

    mediaend = (resultado1 + resultado2)/2;

    printf("Resultado 1 : %.2f\n", resultado1);
    printf("Resultado 2: %.2f\n", resultado2);
    printf("Media final:  %.2f\n", mediaend);



return 0;
}