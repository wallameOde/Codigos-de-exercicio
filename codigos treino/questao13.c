#include <stdio.h>

int main() {
    float preco_fabrica, impostos, revendedor, preco_final;

    printf("Digite o preco de fabrica do carro: ");
    scanf("%f", &preco_fabrica);

    impostos = 0.45 * preco_fabrica;
    revendedor = 0.28 * preco_fabrica;
    preco_final = preco_fabrica + impostos + revendedor;

    printf("O preco final do carro e: R$ %.2f\n", preco_final);

    return 0;
}