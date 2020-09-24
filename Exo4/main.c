#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int val = rand();
	printf("%d \n",val);
	int jul = 0;
	int counter = 0;
	while (val != jul) {
		printf("Ta valeur jul : ");
		scanf_s("%d", &jul);
		counter += 1;
		if (jul < val) {
			printf("Trop petit \n");
		}
		else if (jul > val) {
			printf("Trop grand\n");
		}
	}
	printf("Bravo en %d coup.s",counter);
}