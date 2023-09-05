#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i <= 7; i++) {
    
        printf("3 elevado a %d é: %.f\n", i, pow(3, i));

    }

}