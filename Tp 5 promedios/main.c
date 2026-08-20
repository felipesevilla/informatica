/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int estudiantes;
    int nota;
    int max;
    int min;
    int suma=0;
    float promedio;
    printf("ingrese la cantidad de estudiantes: ");
    scanf("%d", &estudiantes);
    while (estudiantes<=0){
        printf("\nerror, cantidad de estudiantes no valido\n");
        printf("ingrese nuevamente la cantidad: ");
        scanf("%d", &estudiantes);
    }
    for (int i=0; i<estudiantes; i++){
        printf("ingrese la calificacion del estudiante: ");
        scanf("%d", &nota);
        while (nota<0 || nota>100){
            printf("\nla nota ingresada no es valida, debe estar entre 0 y 100:\n");
            printf("ingrese la nota nuevamente ");
            scanf("%d", &nota);
        }
        suma= suma + nota;
        if(i==0){
            max=nota;
            min=nota;
        }
        if(nota>max){
            max=nota;
        }
        if(nota<min){
            min=nota;
        }
    }
    promedio= (float)suma / estudiantes;
    printf("\nel promedio es: %.2f", promedio);
    printf("\nla nota maxima es: %d ", max); 
    printf("\nla nota minima es: %d ", min);

    return 0;
}