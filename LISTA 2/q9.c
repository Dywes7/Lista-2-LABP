#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int primeiro_termo = 1;
    int segundo_termo = 1;
    int proximo_termo;

    printf("1� Termo: %d\n", primeiro_termo);
    printf("2� Termo: %d\n", segundo_termo);

    for (int i = 3; i <= 20; i++) {

        proximo_termo = primeiro_termo + segundo_termo;
        primeiro_termo = segundo_termo;
        segundo_termo = proximo_termo;

         printf("%d� Termo: %d\n", i, proximo_termo);

    }


}