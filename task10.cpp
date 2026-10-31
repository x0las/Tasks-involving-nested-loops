/* Вывести таблицу сумм чисел от 1 до 5. В каждой ячейке выводить сумму номера строки и номера столбца. */

#include <stdio.h>

int main() {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			printf("%d ", i + j);
		}
		printf("\n");
	}
	return 0;
}
