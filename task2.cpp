/* Вывести квадрат 4 на 4, заполненный числами 1. */

#include <stdio.h>

int main() {
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 4; j++) {
			printf("1 ");
		}
		printf("\n");
	}
	
	return 0;
}
