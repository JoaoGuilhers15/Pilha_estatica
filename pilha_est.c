#include <stdio.h>
#include <stdlib.h>
#include "pilha_est.h"

#define MAX 50

struct pilha{
    int topo;
    int vet[MAX];
};

//Aloca a memória do topo da pilha
Pilha* criar_pilha(void){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    if (p==NULL){
        return p;
    }
    p->topo = -1;
    return p;
}

//empilha novo valor
void pilha_push(Pilha* p, int n){
    if(p->topo == MAX-1){
        printf("Pilha cheia!\n");
        return;
    }
    
    p->topo++;
    p->vet[p->topo] = n;
    return;
}

//Exibe a pilha completa ao usuário
void pilha_exibir(Pilha* p){
    if(pilha_vazia(p)){
        printf("\nPilha vazia!\n");
        return; 
    }
    for(int atual = p->topo; atual >= 0; atual--){
        printf("%d\n", p->vet[atual]);
    }
    printf("\n");

}

//desempilha o último valor empilhado
int pilha_pop(Pilha* p){
    int v;
    if(pilha_vazia(p)){
        printf("Pilha vazia!\n");
        return -1;
    }
    v = p->vet[p->topo];
    p->topo--;
    return 1;
}

//limpa a pilha
void pilha_limpar(Pilha* p){
    p->topo = -1;
}

//libera a memória usada pela pilha
void pilha_destruir(Pilha* p){
    free(p);
}

//verifica se a pilha está vazia
int pilha_vazia(Pilha* p){
    if(p->topo == -1) return 1;
    else return 0;
}

//Retorna a posição do último elemento do vetor
int pilha_topo(Pilha* p){
    return p->topo;
}

//Retorna o total de valores empilhados
int pilha_tamanho(Pilha* p){
    return p->topo + 1;
}


