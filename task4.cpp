/* Вывести числа от 1 до 5 в пяти строках. */

#include <stdio.h>

int main() {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
	
	return 0;
}
