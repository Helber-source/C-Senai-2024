#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int matriz1 [6][6], matriz2 [6][6], matriz3[6][6];

	printf("Matriz 1\n");
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			printf ("Digite o valor da posição [%d][%d]:", i, j);
			scanf ("%d", &matriz1[i][j]);
		}
	}

	printf("Matriz 2\n");
	for (int i = 0; i < 6; i++) {
		for ( int j = 0; j < 6; j++) {
			printf ("Digite o valor da posição [%d][%d]:", i, j);
			scanf ("%d", &matriz2[i][j]);
		}
	}

	printf("Matriz 3\n") ;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
			if (matriz3 [i] [j] % 2 == 0) {
				printf("posição [%d] [%d]: %d (par)\n", i, j, matriz3[i][j]);
			}
			else if (matriz3 [i] [j] % 2 != 0) {
				printf ("posição [%d] [%d]: %d (ímpar)\n", i, j, matriz3[i][j]);
			}
		}
	}
}