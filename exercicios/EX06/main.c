#include <stdio.h>
#include <stdlib.h>

// Alocação Dinâmica de Ponteiros

int main() {
	
	int *ponteiro = NULL;
	
	ponteiro = (int *) malloc (sizeof(int));
	
	if (ponteiro == NULL) {
		printf ("| Erro: Memória Insuficiente.");
	}
	else {
		*ponteiro = 42;
		printf ("|-------------------------------");
		printf ("\n| Endereco: %p \n| Valor: %d", ponteiro, *ponteiro);
		free (ponteiro);
		ponteiro = NULL;
	}
	
	return 0;
}
