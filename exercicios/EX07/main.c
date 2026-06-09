#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct de Semaforo 

struct tipo_semaforo {
	char cor [10];
	int id;
};

int main() {
	
	struct tipo_semaforo semaforo [3];
	struct tipo_semaforo *ponteiro;
	int i;

	semaforo[0] = (struct tipo_semaforo) {"Vermelho", 1};
	semaforo[1] = (struct tipo_semaforo) {"Amarelo", 2};
	semaforo[2] = (struct tipo_semaforo) {"Verde", 3};
	
	ponteiro = &semaforo[0];
	
	for (i = 0; i < 3; i++) {
		printf ("\n| Cor: %s - ID: %d", ponteiro->cor, ponteiro->id);
		ponteiro++;
	}
			
	return 0;
}
