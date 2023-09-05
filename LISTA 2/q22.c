#include <stdio.h>

int main() {
    
    int numero, digito, contador = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    
    while (numero != 0) {
        digito = numero % 10; 
        if (digito == 7) {
            contador++; 
        }
        numero /= 10; 
    }

    printf("O número de dígitos 7 no inteiro é: %d\n", contador);

}
