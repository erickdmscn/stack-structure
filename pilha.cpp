#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 5

int pilha[MAX];
int topo = -1;

int verCheia(){
	if(topo == MAX-1)
	return 1;
	else 
	return 0;
	}
	
int verVazia(){
	if(topo == -1)
	return 1;
	else 
	return 0;
	}	


void empilhar (int dado){
int i;
if(verCheia()){
	printf("Pilha cheia\n");
	exit(1);
}
topo += 1;
for(i=topo; i>0; i--)
pilha[i] = pilha [i-1];
pilha[0] = dado;
}

int remover() {
    if (verVazia()) {
        printf("Erro: Pilha vazia\n");
        exit(1);
    }
	 int i, valor;
    valor = pilha[0];

    for (i = 0; i < topo; i++) {
        pilha[i] = pilha[i + 1];
    }

    topo -= 1;
    return valor;
}

void mostrar(){
	int i;
	if(verCheia()){
		printf("Pilha cheia");
		exit(1);
	}
	for(i=0; i<=topo; i++)
	printf("%d \n", pilha[i]);
}

int main(){
	int dado;
	return 0;
}

