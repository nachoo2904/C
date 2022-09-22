#include <stdio.h>
#include <stdlib.h>
/*programa  Ej 14 tp2*/
 main()
{	
    int cant;
    char nombre[20];
    float precio, ptotal;
    
    printf("Ingrese el nombre del producto\n");
    scanf("%s", &nombre);

 	printf("Ingrese el precio\n");
    scanf("%f", &precio);

    printf("Ingrese cantidad de unidades\n");
    scanf("%d", &cant);
    
    ptotal=precio*cant;
      
    printf ("Nombre: %s cantidad de unidades: %d precio total: %f\n", nombre, cant, ptotal);
    
    system("pause");
	
}
