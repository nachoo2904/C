#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define tam 20
//Ej 7) Dado un vector de 20 números. Hallar el promedio de los elementos positivos y el porcentaje de los negativos
main()
{
	int vector[tam], i, acum=0, contN=0, contP=0, porc=0;
	float prom=0;
	for(i=0;i<tam;i++)
      {
          printf("Ingrese el numero %i de 20: \n",i+1);
          scanf("%i",&vector[i]);
          if(vector[i]>0)
          {
          	acum=acum+vector[i];
          	contP++;
		  } else if(vector[i]<0) {
		  	contN++;
		  }
      }
    porc=(100*contN)/(20);
    prom=acum/contP;
    printf("El promedio de los elementos positivos es:%f\n",prom);
    printf("El porcentaje de numeros negativos es:%i \n",porc);
}
