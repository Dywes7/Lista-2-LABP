#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    float grao = 1;
    float somatorio = 1;

    for (int i = 1; i <= 64; i++) {

        grao = grao * 2;

        somatorio += grao;

    }

    printf("O somatório é: %.f", somatorio);

}