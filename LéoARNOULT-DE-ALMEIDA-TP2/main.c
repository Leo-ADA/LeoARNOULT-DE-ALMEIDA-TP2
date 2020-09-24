#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
	//la valeur max du n est 361 car la somme des entiers est n(n+1)/2 et la limite
	//d'un unsigned short int est 35535 donc avec une equation on obtient que le n limite est 362
	unsigned short int n;
	printf("Choisir un nombre : ");
	scanf_s("%hu", &n);
	while (n >= 362) {
		printf("\nChoisir un nombre plus petit que 362 : ");
		scanf_s("%hu", &n);
	}
	int count = 0;
	int i = 0;
	for (i ; i <= n ; i++)
	{
		count += i;
	}
	printf("Résultat avec boucle for : %d\n", count);

	unsigned short int count2 = 0;
	unsigned short int n2 = n;
	int i2 = 0;
	while (i2 <= n2)
	{
		if (USHRT_MAX - i2 < count2 ) {
			printf("Depassement de valeur\n ");
			break;

		}
		count2 += i2;
		i2 += 1 ;
	}
	printf("Calcul avec boucle while : %hu\n", count2);



	int n3 = n;
	int i3 = 0;
	int count3 = 0;
	do {
		count3 = count3 + i3;
		i3 = i3 + 1;
	} while (i3 <= n3);
	printf("Calcul avec boucle do while : %d\n", count3);


	system("pause");
	return(EXIT_SUCCESS);


}
