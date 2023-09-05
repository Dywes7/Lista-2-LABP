#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("Valor de 'a' após pré-incremento: %d\n", --a); // a = 4
    printf("Valor de 'b' após pré-incremento: %d\n", b--); // b = 10
    printf("Valor de 'b' após pós-incremento: %d\n", b);   // b = 9

}
