#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    for (int i = 10; i <= 100; i = i + 10) {

        printf("%d Graus Celcius = %.f Graus Farenheit\n", i, 1.8 * i + 32);

    }
}