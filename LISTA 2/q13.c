#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int somatorio = 0;
    int a, b;

    printf("Forneça um intervalo de início: ");
    scanf("%d", &a);

    printf("Forneça um intervalo de fim: ");
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

    printf("O somatório dos números pares do intervalor entre %d e %d é: %d", a, b, somatorio);

}