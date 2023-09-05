#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");
        
        char confirma_voto;
        int voto;
        int votos_paulo = 0, votos_renata = 0;
        int votos_branco = 0, votos_nulo = 0;
    
        do {
            
            do {
                
            printf("Digite o número do seu voto: ");
            scanf("%d", &voto);
            
            printf("Tem certeza que deseja voltar no número %d? (S/N): ", voto);
            scanf(" %c", &confirma_voto);
    
            } while(confirma_voto != 'S' && confirma_voto != 's');

            printf("\nVoto Confirmado!\n");
            
            if (voto == 5) {
                
                votos_paulo += 1;
                
            } else if (voto == 7) {
                
                votos_renata += 1;
                
            } else if (voto == 0) {
                
                votos_branco += 1;
                
            } else if (voto > 0) {
                
                votos_nulo += 1;
                
            } else {
                
                printf("\nVotação Encerrada.\n");
                printf("\nExibindo Relatório...\n");
                
            }
           
        } while (voto >= 0);

        printf("Número de votos para o canditado Paulo: %d (%.2f %% dos votos) \n", votos_paulo, 100.0 * ( (float) votos_paulo / (float) (votos_branco + votos_nulo + votos_paulo + votos_renata)));
        printf("Número de votos para a canditada Renata: %d (%.2f %% dos votos)\n", votos_renata, 100.0 * ( (float) votos_renata / (float) (votos_branco + votos_nulo + votos_paulo + votos_renata)));
        printf("Número de votos em branco: %d\n", votos_branco);
        printf("Número de votos nulos: %d\n", votos_nulo);
        
    return 0;

}