#include <stdio.h>
int main(){
   FILE *arquivo = fopen("questao9.txt", "w");
   
   if (arquivo == NULL){
      printf("Arquivo nao encontrado.\n");
      return 1;
   }
    const char *conteudo = "Este e o conteudo que sera alvo no arquivo.";
   
    fprintf(arquivo, "%s", conteudo);

    int A = 10;
    int B = 30;
    int temp;



    printf("%d , ", A);
    printf("%d\n", B);

     temp = A;
    A = B;
    B = temp;

    
    printf("%d, %d", A, B);
    fclose(arquivo);
    
 return 0;    
    }