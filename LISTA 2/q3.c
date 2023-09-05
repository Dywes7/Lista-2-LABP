#include <stdio.h>

int main() {

    unsigned numero;
    int fatorial = 1;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%u", &numero);
    
    for (int i = numero; i > 1; i--) {
        
        fatorial = fatorial * i;
    }
    
    printf("!%d = %d\n", numero, fatorial);

    return 0;

}