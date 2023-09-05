#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("       SOMA   |   SUBTRAÇÃO   |   MULTIPLICACÃO   |   DIVISÃO  \n");

    for (int i = 1; i <= 10; i++) {

        printf("%d + %d = %d   |   %d - %d = %d   |   %d X %d = %d   |   %d / %d = %d  \n", num, i, num + i, num, i, num - i, num, i, num * i, num, i, num / i);

    }

}