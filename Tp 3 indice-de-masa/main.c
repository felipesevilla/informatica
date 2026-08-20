/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int peso;
    float altura;
    float indice;
    printf("ingrese su peso: ");
    scanf("%d", &peso);
    while (peso<=0 || peso>635){
        printf("el dato ingresado no es correcto\ningrese nuevamente su peso: ");
        scanf("%d", &peso);
    }
    printf("ingrese su altura en metros: ");
    scanf("%f", &altura);
    while(altura<=0 || altura>=2.80){
        printf("la altura ingresada no es correcta\ningrese nuevamente su altura: ");
        scanf("%f", &altura);
    }
    indice=peso/(altura*altura);
    if(indice<18.5){
        printf("su indice de masa es bajo: %.2f", indice);
        printf("\n\nTabla de indice de masas:\n<18.5 = bajo peso\n18.5 a 24.9 = peso normal\n25 a 29.9 = sobrepeso\n>30 = obesidad");
    }
    else if (indice>=18.5 && indice<=24.9){
        printf("su indice de masa esta dentro de un rango normal: %.2f", indice);
         printf("\n\nTabla de indice de masas:\n<18.5 = bajo peso\n18.5 a 24.9 = peso normal\n25 a 29.9 = sobrepeso\n>30 = obesidad");
    }
    else if (indice>=25 && indice<=29.9) {
        printf("su indice de masa indica sobrepeso: %.2f", indice);
         printf("\n\nTabla de indice de masas:\n<18.5 = bajo peso\n18.5 a 24.9 = peso normal\n25 a 29.9 = sobrepeso\n>30 = obesidad");
    }
    else{
        printf("su indice de masa indica obesidad: %.2f", indice);
         printf("\n\nTabla de indice de masas:\n<18.5 = bajo peso\n18.5 a 24.9 = peso normal\n25 a 29.9 = sobrepeso\n>30 = obesidad");
    }
    
    return 0;
}
