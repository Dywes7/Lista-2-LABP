#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    

    for (int i = 1; i <= 10; i++) {

        if (i % 2) {

            int fatorial = 1;

            for (int j = i; j > 1; j--) {

                fatorial = fatorial * j;

            }

            printf("Fatorial de %d é: %d\n", i, fatorial);

        }

    }


}