#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    for (int i = 15; i <= 90; i++) {

        if (!(i % 4)) {
            printf("O %d � multiplo de 4, e o seu quadrado �: %d.\n", i, i * i);
        }

    }

}