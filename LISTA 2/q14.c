#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int a, b, qtd;

    printf("Forneça um intervalo de início: ");
    scanf("%d", &a);

    printf("Forneça um intervalo de fim: ");
    scanf("%d", &b);

    if (a < b) {

        for (int i = a; i <= b; i++) {

            if (!(i % 3)) {
                
                qtd++;

            }

        }

    } else {

        for (int i = b; i <= a; i++) {

            if (!(i % 3)) {
                
                qtd++;

            }

        }

    }

     printf("A quantidade de números divisíveis por 3 entre %d e %d é: %d", a, b, qtd);

}