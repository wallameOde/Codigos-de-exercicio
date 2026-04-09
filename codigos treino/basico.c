#include <stdio.h>

int main(){
    FILE *arquivo = fopen("basico.txt","r+");
    if (arquivo == NULL)
    {printf("Erro ao abrir o arquivo\n");
    return 1 ;
    }
    
}