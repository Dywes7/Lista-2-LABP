#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int a, b, qtd;

    printf("Forne�a um intervalo de in�cio: ");
    scanf("%d", &a);

    printf("Forne�a um intervalo de fim: ");
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

     printf("A quantidade de n�meros divis�veis por 3 entre %d e %d �: %d", a, b, qtd);

}