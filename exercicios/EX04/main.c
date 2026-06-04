#include <stdio.h>
#include <stdlib.h>

// ALocação Dinâmica na Memória

int main() {
	
	int *ponteiro;
	
	printf ("| ENDERECO INVALIDO");
	printf ("\n| Endereco: %p", ponteiro);
	ponteiro = (int *) malloc (sizeof (int));
	
	if (ponteiro == NULL) {
		printf ("\n| Ocorreu um erro. Memoria Insuficiente.");
	}
	else {
		printf ("\n|-------------------------------");
		printf ("\n| ALOCANDO ENDERECO VALIDO");
		printf ("\n| Endereco: %p \n| Valor: %d", ponteiro, *ponteiro);
		*ponteiro = 5;
		printf ("\n|-------------------------------");
		printf ("\n| TROCANDO LIXO DE MEMORIA");
		printf ("\n| Endereco: %p \n| Valor: %d", ponteiro, *ponteiro);
		free (ponteiro);
		ponteiro = NULL;
		printf ("\n|-------------------------------");
		printf ("\n| MEMORIA LIBERADA");
		printf ("\n| Endereco: %p", ponteiro);
	}
	
	return 0;
}
