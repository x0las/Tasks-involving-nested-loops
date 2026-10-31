/* Вывести 4 строки. В каждой строке повторить номер строки 3 раза. */

#include <stdio.h>

int main() {
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 3; j++) {
			printf("%d ", i);
		}
		printf("\n");
	}
	
	return 0;
}
