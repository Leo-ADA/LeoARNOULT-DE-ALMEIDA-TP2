#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
	int year;
	do {
		printf("Saisir une annee : ");
		scanf_s("%d", &year);
	} while (10000 < year);
	if ((year % 400) == 0 || ((year % 4) == 0 && (year % 100) != 0)) {
		printf("%d est une annee bissextile(methode 1)\n", year);
	}
	else {
		printf("%d n'est pas une annee bissextile(methode 1)\n", year);
	}

	if (year % 100 == 0) {
		if (year % 400 == 0){
			printf("%d est une annee bissextile(methode 2)\n", year);
		}
		else {
			printf("%d n'est pas une annee bissextile(methode 2)\n", year);
		}
		
	}
	else {
		if (year % 4 == 0) {
			printf("%d est une annee bissextile(methode 2)\n", year);
		}
		else {
			printf("%d n'est pas une annee bissextile(methode 2)\n", year);
		}
	}
}