#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int num, palindromo;
    int uni, dez, cen, milhar, dez_milhar;

    do {

        printf("Digite um n�mero de 5 d�gitos: ");
        scanf("%d", &num);

    } while (num < 10000 || num > 99999);

    dez_milhar = num / 10000;
    milhar = (num - (dez_milhar * 10000)) / 1000;
    cen = (num - (dez_milhar * 10000) - (milhar * 1000)) / 100;
    dez = (num - (dez_milhar * 10000) - (milhar * 1000) - (cen * 100)) / 10;
    uni = (num - (dez_milhar * 10000) - (milhar * 1000) - (cen * 100) - (dez * 10));

    palindromo = (uni * 10000) + (dez * 1000) + (cen * 100) + (milhar * 10) + dez_milhar;

    

    if (num == palindromo) {
        printf("Este � um n�mero pal�ndromo.\n");
    } else {
        printf("N�O � um n�mero pal�ndromo.\n");
    }

    
    printf("NUMERO: %d%d%d%d%d\n", dez_milhar, milhar, cen, dez, uni);
    printf("NUMERO INVERTIDO: %d\n", palindromo);


}