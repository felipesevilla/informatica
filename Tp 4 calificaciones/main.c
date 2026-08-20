/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int nota;
    printf("ingrese su calificacion: ");
    scanf("%d", &nota);
    if(nota>=90){
        printf("Calificacion: A");
    }
    else if(nota>=80 && nota<90){
        printf("Calificacion: B");
    }
    else if(nota>=70 && nota<80){
        printf("Calificacion: C");
    }
    else if(nota>=60 && nota<70){
        printf("Calificacion: D");
    }
    else{
        printf("Calificacion: F");
    }
    return 0;
}