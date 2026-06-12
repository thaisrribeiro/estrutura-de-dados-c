#include <stdio.h>
#include <stdlib.h>

// FILAS - First In First Out (FIFO)

// Constante
#define TAM 5

// Tipo Fila
struct fila {
	int dados[TAM];
	int inicio;
	int fim;
};

// Prototipação
void menu(int *op);
void inicializarFila (struct fila *Fila);
void mostrarFila (struct fila *Fila);
void entradaFila(struct fila *Fila);
void saidaFila(struct fila *Fila);

// Função Principal
int main() {
	
	struct fila Fila;
	inicializarFila (&Fila);
	int op = -1;
	while (op != 0) {
		menu(&op);
		switch (
		op) {
			case 1: mostrarFila(&Fila); break;
			case 2: entradaFila(&Fila); break;
			case 3: saidaFila(&Fila); break;
			case 0: printf ("| Encerrando Programa..."); break;
		}
	}
	return 0;
	
}

// Funções
void inicializarFila (struct fila *Fila) {

	int i;
	for (i = 0; i < TAM; i++) {
		Fila->dados[i] = 0;
	}
	Fila->fim = Fila->inicio = 0;
	
}

void menu (int *op) {
	
	printf ("\n|--------------------- MENU ---------------------");
	printf ("\n| [1] Mostrar Fila \n| [2] Adicionar Dados \n| [3] Remover Dados \n| [0] Sair");
	printf ("\n|------------------------------------------------");
	printf ("\n| - Informe a Operacao: ");
	scanf ("%d", op);
	
	while (*op < 0 || *op > 3) {
		printf ("| [!] Operacao Invalida - Tente Novamente: ");
		scanf ("%d", op);
	}
	system ("cls");
	
}

void mostrarFila (struct fila *Fila) {
	
	int i;
	printf ("\n|---------------- MOSTRAR A FILA ----------------\n|");	
	if (Fila->fim == Fila->inicio) {
		printf ("\n| [!] Nada foi adicionado ou foi removido da fila.");
	}
	else {
		printf("\n|");
		for (i = Fila->inicio; i < Fila->fim; i++) {
			printf (" [%d]", Fila->dados[i]);
		}	
	}
	printf ("\n|");
}

void entradaFila(struct fila *Fila) {
	
	printf ("\n|--------------- ENTRADA NA FILA ----------------\n|");	
	if (Fila->fim == TAM) {
		printf ("\n| [!] A fila esta cheia. \n|");
	}
	else {
		printf ("\n| - Informe o dado: ");
		scanf ("%d", &Fila->dados[Fila->fim]);
		Fila->fim++;
		printf ("|");
		mostrarFila(Fila);
	}
}

void saidaFila(struct fila *Fila) {
	
	printf ("\n|---------------- SAIDA DA FILA -----------------\n|");	
	if (Fila->fim == Fila->inicio) {
		printf ("\n| [!] A fila esta vazia. \n|");
	}
	else {
		int removido;
		removido = Fila->dados[Fila->inicio];
		Fila->dados[Fila->inicio] = 0;
		
		printf ("\n| - Dado Removido: [%d] \n|", removido);
		int i;
		for (i = Fila->inicio+1; i < Fila->fim; i++) {
			Fila->dados[i-1] = Fila->dados[i];
		}
		Fila->fim--;
		mostrarFila(Fila);
	}
}
