#include <stdio.h>

int main() {

    float num1, num2;

    printf("Digite o NUMERADOR: ");
    scanf("%f", &num1);

    do {
        printf("Digite o DENOMINADOR: ");
        scanf("%f", &num2);
    } while (num2 == 0);
    

    printf("%.2f divido por %.2f é: %.2f", num1, num2, num1 / num2);

}