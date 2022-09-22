/*4) Escribir un programa que pida 10 números enteros por teclado, los 
cargue en un vector y que imprima por pantalla:
a. Cuántos de esos números son pares.
b. Cuál es el valor del número máximo.
c. Cuál es el valor del número mínimo. */

#include <stdio.h>

main()
{
      int vector[10], cant=0, max, min,i;
      
      for(i=0;i<10;i++)
      {
          printf("Ingrese el numero %i de 10: \n",i+1);
          scanf("%i",&vector[i]); //operación de entrada de elementas del vector a traves de indice que cambia con ciclo for
      }
      max=vector[0]; //asigno primero elemento del vector
      min=vector[0];
      for(i=0;i<10;i++)//recorro vector con mismo indice
      {
         if(vector[i]%2==0)
           {cant=cant+1;}
         
        if (vector[i]>max)
              {max=vector[i];}
         
		if (vector[i]<min)
            {min=vector[i];}
      }
printf("La cantidad de numeros pares cargada en el vector es %i\n", cant);
printf("El valor maximo del vector en %i\n", max);
printf("El valor minimo del vector es %i\n", min);

}
      
