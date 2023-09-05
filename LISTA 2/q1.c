#include <stdio.h>

int main() {

    int numero_dia;
    
    printf("Digite um número de 1 a 7 ou digite 0 para ENCERRAR O PROGRAMA: ");
    scanf("%d", &numero_dia);
    
    while (numero_dia != 0) {

        switch (numero_dia) {
            case 1:
                printf("1 correponde a Segunda-Feira.\n");
                break;
            case 2:
                printf("2 correponde a Terça-Feira.\n");
                break;
            case 3:
                printf("3 correponde a Quarta-Feira.\n");
                break;
            case 4:
                printf("4 correponde a Quinta-Feira.\n");
                break;
            case 5:
                printf("5 correponde a Sexta-Feira.\n");
                break;
            case 6:
                printf("6 correponde a Sábado.\n");
                break;
            case 7:
                printf("7 correponde a Domingo.\n");
                break;
            default:
                printf("Número de dia não válido.\n");
        }
        
        printf("Digite um número de 1 a 7 ou digite 0 para SAIR: ");
        scanf("%d", &numero_dia);
    
     }

    printf("Programa encerrado!");

    return 0;


}