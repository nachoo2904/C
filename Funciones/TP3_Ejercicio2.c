//2-REALIZAR UNA FUNCIÓN PARA INGRESAR DOS NÚMEROS Y OTRA PARA MOSTRAR POR
//PANTALLA LOS VALORES INTERCAMBIANDO LAS VARIABLES.
// Tengo que hacer 2 funciones : me pide 1 función para ingresar un numero y la uso dos veces
// me pide otra función que dado dos números, se los pase como parámetro 
// los intercambie y los muestre

#include <stdio.h>
#include <stdlib.h>
// funcion para leer un numero, va a leer un numero entero y me lo va a devolver al main
int leernumero();
void intercambio (int a, int b);
main() 
{

	int numero1, numero2;
	
	printf("Ingresar un numero   \n");
	fflush(stdin);
	numero1=leernumero();  // aca tengo que invocar o llamar a una funcion
	printf("ingresar otro numero \n");
	fflush(stdin);
    numero2=leernumero(); // aca tengo que invocar a la funcion leernumero
	
    // invoco a la funcion intercambio
    intercambio(numero1, numero2);
	
	}
// funcion para leer un numero
int leernumero()
{
	int numero;
	fflush(stdin);
	scanf("%d",&numero);
	return numero;	
}

// funcion para intercambiar dos valores
void intercambio (int a, int b)
{
int aux;
aux=a;
a=b;
b=aux;

printf(" numero intercambiado %d  \n",a);
printf(" numero intercambiado %d  \n",b);
	
}
