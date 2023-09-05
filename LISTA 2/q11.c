#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int a, b;

    printf("Forneça um intervalo de início: ");
    scanf("%d", &a);

    printf("Forneça um intervalo de fim: ");
    scanf("%d", &b);

    if (a < b) {

        for (int i = a; i <= b; i++) {

        if (!(i % 4)) {
            printf("O %d é multiplo de 4, e o seu quadrado é: %d.\n", i, i * i);
        }

        }

    } else {

        for (int i = b; i <= a; i++) {

        if (!(i % 4)) {
            printf("O %d é multiplo de 4, e o seu quadrado é: %d.\n", i, i * i);
        }

        }

    }

    
}