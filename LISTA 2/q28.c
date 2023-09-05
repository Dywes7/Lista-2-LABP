#include <stdio.h>
#include <locale.h>


// Função para esconder bits
unsigned char esconderBits(unsigned char x, unsigned char y) {

    setlocale(LC_ALL, "Portuguese");

    if (y < 5) {

        printf("Y deve ser maior ou igual a 5.\n");

        return x;

    }

    // Máscara para limpar os 4 bits anteriores e posteriores a Y
    unsigned char mascara = ~(0xF << (y - 4)) & 0xFF;

    // Aplicar a máscara para esconder os bits
    x = x & mascara;

    return x;

}

int main() {

    setlocale(LC_ALL, "Portuguese");

    unsigned char x, y;

    // Solicitar entrada do usuário para X e Y
    printf("Digite o valor de X (unsigned char): ");
    scanf("%hhu", &x);
    
    printf("Digite o valor de Y (unsigned char): ");
    scanf("%hhu", &y);

    // Chamar a função para esconder os bits e exibir o resultado
    unsigned char resultado = esconderBits(x, y);
    printf("Resultado: %u\n", resultado);

    return 0;
    
}
