#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int soma_tres = 0;
    int soma_cinco = 0;

    for (int i = 0; i <= 100; i++) {

        if (!(i % 3)) {

            soma_tres += i;

        }

        if (!((i + 100) % 5)) {

            soma_cinco += i;

        }

    }

    printf("O somatório dos números divisíveis por 3 no intervalo [0,100] é: %d\n", soma_tres);
    printf("O somatório dos números divisíveis por 5 no intervalo [100,200] é: %d\n", soma_cinco);

}