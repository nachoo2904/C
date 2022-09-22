#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float potencia(float a, float b);

int main(){
	float x,y;
printf ("Ingresa la base: ");
scanf ("%f", &x);
printf ("ingrese el exponente: ");	
scanf ("%f", &y);
printf ("La potencia da como resultado: %f", potencia(x, y));

return 0;

}

float potencia(float a, float b){
	float resultado;
	resultado = pow(a, b);
return resultado;
}
