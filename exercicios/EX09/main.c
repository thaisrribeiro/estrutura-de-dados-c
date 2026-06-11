#include <stdio.h>
#include <stdlib.h>

// PILHAS - Last In First Out (LIFO)

// Constante
#define TAM 5

// Tipo Pilha
struct pilha {
	int dados[TAM];
	int inicio;
	int fim;
};

// Variáveis Globais
struct pilha Pilha;
int op;

// Prototipação
void inicializarPilha();
void menu();
void mostrarPilha();
void entradaPilha();
void saidaPilha();

// Função Principal
int main() {
	
	inicializarPilha();
	op = -1;
	while (op != 0) {
		menu();
		switch (op) {
			case 1: mostrarPilha(); break;
			case 2: entradaPilha(); break;
			case 3: saidaPilha(); break;
			case 0: printf ("| Encerrando Sistema..."); break;
		}
	}
	return 0;
	
}

// Funções
void inicializarPilha () {
	
	int i;
	Pilha.inicio = Pilha.fim = 0;
	for (i = 0; i < TAM; i++) {
		Pilha.dados[i] = 0;
	}
	
}

void menu() {
	
	printf ("\n|---------------------- MENU ----------------------");
	printf ("\n| [1] Mostrar Pilha \n| [2] Adicionar Dados \n| [3] Remover Dados \n| [0] Sair");
	printf ("\n|--------------------------------------------------");
	printf ("\n| - Informe a operacao: ");
	scanf ("%d", &op);
	
	while (op < 0 || op > 3) {
		printf ("| [!] Operacao Invalida - Tente Novamente: ");
		scanf ("%d", &op);	
	}
	system("cls");
	
}

void mostrarPilha() {
	
	int i;
	printf ("|---------------- CONTEUDO DA PILHA ---------------\n|\n|");
	for (i = 0; i < TAM; i++) {
		printf (" [%d]", Pilha.dados[i]);
	}
	printf("\n|");
}

void entradaPilha() {

	if (Pilha.fim == TAM) {
		printf ("| [!] A pilha atingiu o limite. \n");
	}
	else {
		printf ("|----------------- INSERIR DADOS ------------------\n|\n");	
		printf ("| - Informe o dado: ");
		scanf ("%d", &Pilha.dados[Pilha.fim]);
		Pilha.fim++;
	}
	printf ("|\n");
	mostrarPilha();
	
}

void saidaPilha() {
	
	if (Pilha.fim == Pilha.inicio) {
		printf ("| [!] Nao ha dados na pilha. \n|");
	}
	else {
		printf ("|----------------- REMOVER DADOS ------------------\n");
		int removido;
		removido = Pilha.dados[Pilha.fim-1];
		Pilha.dados[Pilha.fim-1] = 0;
		Pilha.fim--;
		printf ("|\n| - Dado removido: %d", removido);
		printf ("\n|\n");
		mostrarPilha();
	}
	
}
