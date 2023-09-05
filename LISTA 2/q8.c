#include <stdio.h>

int main() {

    float valor_mercadoria, valor_entrada;
    int prestacao;

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor_mercadoria);

    prestacao = (valor_mercadoria / 3);
    valor_entrada = valor_mercadoria - 2 * prestacao;

    printf("Valor de entrada: %.2f\n", valor_entrada);
    printf("Valor das duas prestações: %d\n", prestacao);

}