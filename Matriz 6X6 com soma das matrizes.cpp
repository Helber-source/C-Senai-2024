#include <stdio.h>
#include <stdlib.h>
int main() {
	int matriz1[6][6], matriz2[6][6], soma[6][6];
	int i, j;

	printf("Digite os valores da primeira matriz 6x6:\n");
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &matriz1[i][j]);
		}
	}
	printf("\nDigite os valores da segunda matriz 6x6:\n");
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &matriz2[i][j]);
		}
	}
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			soma[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}
	printf("\nMatriz resultante e verificaC'C#o de par ou C-mpar:\n");
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			printf("%d C) ", soma[i][j]);
			if (soma[i][j] % 2 == 0) {
				printf("par\n");
			} else {
				printf("C-mpar\n");
			}
		}
	}
}
