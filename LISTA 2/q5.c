#include <stdio.h>

int main() {

    int numero;
    int maior_termo;
    int menor_termo;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    maior_termo = numero;
    menor_termo = numero;
    
    while (numero != 0) {
        
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);
        
        if (numero < menor_termo) {
            
            menor_termo = numero;
            
        }
        
        if (numero > maior_termo) {
            
            maior_termo = numero;
            
        }
        
        printf("Maior número digitado: %d\n", maior_termo);
        printf("Menor número digitado: %d\n", menor_termo);
        
        
        
    }
    
    printf("\nPrograma encerrado.\n");
       
        
    
    
    return 0;

}