#include <stdio.h>
#include <locale.h>


void decimalParaBinario(int decimal) {
    int binario[32]; // Array para armazenar o n�mero bin�rio
    int i = 0;

    // Caso especial para o n�mero 0
    if (decimal == 0) {
        printf("Bin�rio: 0\n");
        return;
    }

    // Converter decimal para bin�rio
    while (decimal > 0) {
        binario[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    // Exibir o n�mero bin�rio
    printf("Bin�rio: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

int main() {

    setlocale(LC_ALL, "Portuguese");

    for (int i = 1; i <= 256; i++) {

        printf("Decimal: %d\n", i);
        decimalParaBinario(i);
        printf("Octal: %o\n", i);
        printf("Hexadecimal: %x\n\n", i);

    }


}