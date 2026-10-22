//https://github.com/felipesevilla/informatica.git
#include <stdio.h>
#define TAM 5
int main(int argc, char *argv[]) {
	int codigos[TAM];
	float precios[TAM];
	int i, mayor, menor;
	mayor = 0;
	menor = 0;
	for(i=0; i<TAM; i++) {
		do{
		printf("ingrese el codigo de barras: ");
		scanf("%d", &codigos[i]);
		if(codigos[i] <= 1 || codigos[i] >= 999999999){
			printf("error, el codigo tiene que estar entre 1 y 999999999\n");
		}
		}
		while(codigos[i] <= 1 || codigos[i] >= 999999999);
		do{
		printf("ingrese el precio: ");
		scanf("%f", &precios[i]);
		if (precios[i] < 0) {
			printf("error, el precio ingresado tiene que ser mayor a 0\n");
		}
		}
		while(precios[i] < 0);
	}
	printf("\nCodigo            Precio\n");
	for(i=0; i < TAM; i++){
		printf(" \n%d            %.2f", codigos[i], precios[i]);
	}
	for (i = 1; i < TAM; i++){
		if(precios[i] > precios[mayor]){
			mayor = i;
		}
		if (precios[i] < precios[menor]) {
			menor = i;
		}
	}
	printf("\nel precio mayor es: [%d] %.2f\n", codigos[mayor], precios[mayor]);
	printf("el precio menor es: [%d] %.2f", codigos[menor], precios[menor]);
	return 0;
}

