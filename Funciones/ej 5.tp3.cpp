#include<stdio.h>
#include<stdlib.h>

//5. REALIZAR FUNCIÓN QUE TOME DOS NÚMEROS REALES COMO PARÁMETROS Y DEVUELVA UN
//NÚMERO REAL QUE SERÍA LA MEDIA DE LOS DOS NÚMEROS.


float promedio (float num1,float num2)
{float calculo;
calculo=(num1+num2)/2;
return calculo;
}

main (){
	float num1,num2,resultado;
printf("Ingrese el primer numero real \n");
scanf("%f",&num1);
printf("Ingrese el segundo numero real \n");
scanf("%f",&num2);
resultado=promedio(num1,num2);

printf("El promedio de los dos numeros es: %.2f \n ",resultado);
}


