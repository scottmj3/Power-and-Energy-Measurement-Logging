#include <stdio.h>
int main() {
	int i = 10000000;
	printf("Start");
	while (i < 2000) {
		// printf("%d", i);
		i = i / 2;
	}
	printf("End");
}
