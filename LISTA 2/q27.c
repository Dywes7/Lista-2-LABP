#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");
    
    int num;
    int maior_numero;
    int menor_numero;
    int produto;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    maior_numero = num;
    menor_numero = num;

    while (1) {

        if (num < 0 && num % 2 == 0) {

            break;

        }

        printf("Digite um número inteiro: ");
        scanf("%d", &num);
        
        if (num > maior_numero) {

            maior_numero = num;

        }

        if (num < menor_numero) {

            menor_numero = num;

        }

        produto = maior_numero * menor_numero;

        printf("Produto do maior pelo menor número: %d X %d = %d\n\n", maior_numero, menor_numero, produto);


    }

    printf("\nPROGRAMA ENCERRADO.\n");

}