#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

/*4. REALIZAR UNA FUNCIÓN QUE ME PERMITA ESTABLECER SI UN NÚMERO ES PAR O NO 
UTILIZANDO FUNCIONES.*/

void numero(int N)
{
	if (N%2==0)
	printf("El numero es par");
	
	else
	printf("El numero es impar");
}

int main(){
	
	int N1, x;
	
	
	printf("Ingresar un numero\n");
	scanf("%d", &N1);
	
	numero(N1);
						
}
