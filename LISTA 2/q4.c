#include <stdio.h>

int main() {

    int altura_jose = 150;
    int altura_pedro = 110;
    int anos = 0;
    
    while (altura_jose > altura_pedro) {
        
        altura_jose = altura_jose + 2;
        altura_pedro = altura_pedro + 3;
        anos ++;
    }
    
    printf("Em %d anos, Pedro passou a altura de José.\n", anos);
    
    return 0;

}