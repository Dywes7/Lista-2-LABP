#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int somatorio = 0;
    int a, b;

    printf("Forne�a um intervalo de in�cio: ");
    scanf("%d", &a);

    printf("Forne�a um intervalo de fim: ");
    scanf("%d", &b);

    if (a < b) {

        for (int i = a; i <= b; i++) {

            if (!(i % 2)) {
                
                somatorio += i;

            }

        }

    } else {

        for (int i = b; i <= a; i++) {

            if (!(i % 2)) {
                
                somatorio += i;

            }

        }

    }

    printf("O somat�rio dos n�meros pares do intervalor entre %d e %d �: %d", a, b, somatorio);

}