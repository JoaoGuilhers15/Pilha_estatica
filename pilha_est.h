#ifndef PILHA_EST_H
#define PILHA_EST_H

typedef struct pilha Pilha;

Pilha* criar_pilha(void);
void pilha_push(Pilha* p, int n);
int pilha_pop(Pilha* p);
void pilha_exibir(Pilha* p);
int pilha_vazia(Pilha* p);
int pilha_topo(Pilha* p);
int pilha_tamanho(Pilha* p);
void pilha_limpar(Pilha* p);
void pilha_destruir(Pilha* p);

#endif