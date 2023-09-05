#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    float pi;
    int contador = 0;

        for (int i = 1; i > 0; i = i + 2) {

            contador++;
            pi = pi + (float) 4.0 / (float) i;

            printf("TERMO %d: %f\n", contador, pi);

        }
        
        



}