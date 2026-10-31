/* Вывести треугольник из звездочек высотой 5 строк. */

#include <stdio.h>

int main() {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
