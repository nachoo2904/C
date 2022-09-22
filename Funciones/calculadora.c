#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

// ejercicio para practica de funciones
float calculo(float , float , char  );
void mostrar (float );

main ()
{
float a,b,resultado;
char c;
char rta[3];

printf ("Desea ingresar operaciones SI/NO? \n");
fflush(stdin);
scanf("%s", rta);

while (strcmp(rta,"SI")==0)  //mientras que la respuesta sea SI, 
// es lo mismo hacer !strcmp(rta,"SI"))
{
printf ("Ingrese el primer valor\n");
fflush(stdin);
scanf ("%f", &a);

printf ("Ingrese el segundo valor\n ");
fflush(stdin);
scanf ("%f", &b);

printf ("ingrese la operación( 's'=suma, 'r'=resta, 'm'=multiplicacion, 'd'=division ) \n");
fflush(stdin);
scanf ("%c", &c);

resultado=calculo(a,b,c);  // Se hace el calculo del resultado

mostrar(resultado); // Se muestra el resultado
// es correcto tambien mostrar(calculo(a,b,c));
			
printf ("Desea ingresar operaciones SI/NO? \n");
fflush(stdin);
scanf("%s", rta);	
}
system ("pause");
}

float calculo(float x, float y, char z)
{
	float resu;
	switch (z)
	{
	case 's': resu=x+y;
	          break;
	case 'r': resu=x-y;
	          break;
	case 'm': resu=x*y;
	          break;
	case 'd': resu=x/y;
	          break;         
	}
	return resu;
	
}
void mostrar ( float x)
{  	
printf("El resultado de la operacion es %.2f\n", x); 
system ("pause");				
}




