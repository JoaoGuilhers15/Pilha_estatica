#include <stdio.h>
#include "pilha_est.h"

int main(){
    int n, acao = 0;


    printf("------------TAD Pilha Estática------------\n");

    Pilha* pilha = criar_pilha();

    if(pilha == NULL){
        printf("Erro ao criar pilha!\n");
        return 1;
    }

    while(acao < 5){    
        printf("\nDigite para cada ação que deseja realizar:\n1-Empilhar valor\n2-Desempilhar valor\n3-Exibir pilha\n4-Limpar pilha\n5 ou + - Sair do programa\n\n");
        scanf("%d", &acao);
        printf("\n");

        switch (acao){
            case 1:
                printf("\nDigite o valora ser empilhado: \n");
                scanf("%d", &n);
                pilha_push(pilha, n);
                break;

            case 2:
                n = pilha_pop(pilha);
                if (n>0) printf("\nValor desempilhado\n");
                else printf("Erro ao desempilhar valor!\n");
                break;

            case 3:
                pilha_exibir(pilha);
                break;

            case 4:
                printf("Limpando...\n");
                pilha_limpar(pilha);
                printf("Pilha Limpa!\n");
                break;

            default:
                printf("saindo...\n");
                break;
        }
    }
    
    pilha_destruir(pilha);
    return 0;
}