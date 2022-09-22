#include <stdio.h>
#include <conio.h>
#define indice 10

main()
{
      int vec[indice] /*declaro vector*/, cant=0, max, min,i;
      
      printf("--------------------------\n\n\n");
      for(i=0;i<indice;i++)
      {
          printf("Ingrese el numero %i de 10: \n",i+1);
          scanf("%i",&vec[i]); //operación de entrada de elementas del vector a traves de indice que cambia con ciclo for
      }
      max=vec[0]; //asigno primero elemento del vector
      min=vec[0];
      for(i=0;i<indice;i++)//recorro vector con mismo indice
      {
         if(vec[i]%2==0)
         {
            cant=cant+1;
         }
         
         if (vec[i]>max)
         {
            max=vec[i];
         }
         if (vec[i]<min)
         {
              min=vec[i];
         }
      }
      system("CLS");
      printf("INFORMES\n");
      printf("========\n\n");
      printf("La cantidad de numeros pares cargada en el vector es %i\n", cant);
      printf("El valor maximo del vector en %i\n", max);
      printf("El valor minimo del vector es %i\n",min);
      getch();
}
      
            
