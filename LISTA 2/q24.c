#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int cateto1, cateto2;
    float hipotenusa;

    // hipotenusa = pow(pow(cateto1, 2) + 1, cateto2);

    for (cateto1 = 1; cateto1 <= 500; cateto1++) {

        for (cateto2 = 1; cateto2 <= 500; cateto2++) {

            hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

            if (hipotenusa == (int) hipotenusa) {

                printf("TRIPLAS DE PITÁGORAS...\n");
                printf("Cateto1: %d\n", cateto1);
                printf("Cateto2: %d\n", cateto2);
                printf("Hipotenusa: %d\n\n", (int) hipotenusa);

            }

            
        }

    }


}