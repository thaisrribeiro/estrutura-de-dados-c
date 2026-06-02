#include <stdio.h>
#include <stdlib.h>

// Verificando Ponteiro após Novas Atribuições de Valor em X

int main() {
	
	int x;
	int *ponteiro;
	int i;
	
	x = 10;
	ponteiro = &x;
	
	for (i = 0; i < 3; i++) {
		printf ("\n|---------------------------------");
		printf ("\n| Valor X: %d", x);
		printf ("\n| Valor de X pelo Ponteiro: %d", *ponteiro);
		printf ("\n| Endereco de X: %p", &x);
		printf ("\n| Endereco no Ponteiro: %p", ponteiro);
		x += 10;
	}
	
	return 0;
}
