#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int a, b;
    int soma = 0;
    float media;


    printf("Forneça um intervalo de início: ");
    scanf("%d", &a);

    printf("Forneça um intervalo de fim: ");
    scanf("%d", &b);

    for (int i = a; i <= b; i++) {

        soma += i;

    }

    media = (float) soma / (float) (b - a + 1);

    printf("soma: %d\n", soma);

    printf("A média aritmética no intervalo de %d a %d é: %.2f", a, b, media);

}