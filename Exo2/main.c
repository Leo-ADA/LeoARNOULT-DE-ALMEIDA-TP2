#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
	while (1) {
		float A, B, C, tmp;
		A = B = C = 0;
		while (1 > A || A > 150) {
			printf("Choisir une longueur : ");
			scanf_s("%f", &A);
		}
		while (1 > B || B > 150) {
			printf("Choisir une largeur : ");
			scanf_s("%f", &B);
		}
		while (1 > C || C > 150) {
			printf("Choisir une hauteur : ");
			scanf_s("%f", &C);
		}
		//methode : on tri les valeurs par grandeur et on test 25,35,55 
		if (B < A) { tmp = A; A = B; B = tmp; }
		if (C < A) { tmp = A; A = C; C = tmp; }
		if (C < B) { tmp = B; B = C; C = tmp; }
		printf("%f, %f, %f", A, B, C);
		if (C <= 55 && B <= 35 && A <= 25) {
			printf("\nVALIDE \n");
			printf("\nNouveau colis : \n");
		}
		else {
			printf("\nPAS VALIDE \n");
			printf("\nNouveau colis : \n");
		}
	}
}