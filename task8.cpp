/* Вывести 3 строки по 4 числа. В каждой строке числа от 1 до 4. */

#include <stdio.h>

int main() {
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 4; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
	
	return 0;
}
