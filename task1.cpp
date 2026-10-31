/* Вывести прямоугольник из 4 строки 5 столбцов звездочек. */

#include <stdio.h>

int main() {
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 5; j++) {
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
