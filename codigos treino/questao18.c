#include <stdio.h>
int main(){
    int maca;
    float a = 0.30;
    float b = 0.25;
    float result;

  // Operaçao///
result = a * maca;
result = b * maca;

 
puts("\n O preco da maca menos que uma duzia R$ 0.30 und. ----");
puts(" Ao comprar uma duzia ou mais sai a R$ 0.25 und. ---\n");

printf("Quantas vai querer? ");
scanf("%d", &maca);

if (maca < 12 )
{
    result = a * maca;
    printf("%.2f", result);
}else {
    result = b * maca;
     printf("%.2f\n", result);

}

    return 0;

}
