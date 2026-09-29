#include <stdio.h>
float calcular_area_del_rectangulo ( float a, float b){
	float area;
	area = a*b;
	return area;
}
	float calcular_perimetro_del_rectangulo ( float a, float b){
		float perimetro;
		perimetro = 2*(a+b);
		return perimetro;
	}
float calcular_area_del_circulo (float r){
	float area;
	area = 3.14159*(r*r);
	return area;
}
	float calcular_perimetro_del_circulo (float r){
		float perimetro;
		perimetro = 2*3.14159*r;
		return perimetro;
	}
void imprimir_resultados (int opcion){
	float a, b, r;
	switch(opcion){
	case 1:
		printf("ingrese la longitud del rectangulo: ");
		scanf("%f", &a);
		printf("ingrese la altura del rectangulo: ");
		scanf("%f", &b);
		printf("el perimetro es: %.2f ", calcular_perimetro_del_rectangulo (a,b));
		printf("\nel area del rectangulo es: %.2f", calcular_area_del_rectangulo(a,b));
		break;
	case 2:
		printf("ingrese el radio: ");
		scanf("%f", &r);
		printf("el area es: %.2f", calcular_area_del_circulo(r));
		printf("\nel perimetro es: %.2f", calcular_perimetro_del_circulo(r));
		break;
	}
}
int main(int argc, char *argv[]){
	int opcion;
	do{
		printf("\nelige una opcion para calcular:\n1. Rectangulo\n2. Circulo\n ingrese una opcion: ");
		scanf("%d", &opcion);}
	while(opcion!=1 && opcion!=2);
		imprimir_resultados (opcion);
	return 0;
}

