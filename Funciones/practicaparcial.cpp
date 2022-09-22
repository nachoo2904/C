#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// funciones pedidas
float monto_tarifa(char );
void mostrar (float, float, float);

int main(){
    float monto, acu1=0, acu2=0, acu3=0;
    char respuesta, nombrevendedor[20], promocion;  
    int codcliente, marca;
    
    printf("\t\t\nDesea ingresar llamadas S/N: ");
    fflush(stdin);
    scanf("%c",&respuesta);
    
    while(respuesta=='S')
    {   		
    	printf("\t\t\nIngrese nombre del vendedor: ");
    	fflush(stdin);
    	scanf("%s",&nombrevendedor);
    	printf("\t\t\nCódigo de cliente: ");
    	fflush(stdin);
    	scanf("%d",&codcliente);
    	printf("\t\t\nMarca si el cliente atendio o no ");
    	fflush(stdin);
    	scanf("%d",&marca);
    	
    	if (marca==1)
    	{
    	printf("\t\t\nPromocion ");
    	fflush(stdin);
    	scanf("%c",&promocion);	
    
    	// cálculo importe a cobrar de estacionamiento
    	monto=monto_tarifa(promocion);    
    	printf("Cliente %d\t monto tarifa %f\n", codcliente, monto); 
	    }
	    
		if (strcmp(nombrevendedor, "Juan")==0)
		    acu1=acu1+500;
		    else if (strcmp(nombrevendedor, "Pedro")==0)
		         acu2=acu2+500;
		         else acu3=acu3+500;
     
        printf("\t\t\nDesea ingresar llamadas S/N: ");
    	fflush(stdin);
    	scanf("%c",&respuesta);  

    }  // fin del while
    mostrar(acu1, acu2, acu3); // mostrar acumuladores
    system("pause");
    }  // fin del main
    
float monto_tarifa(char promocion)
{ 
  switch (promocion)  
  {
  	case 'a': return 1000;
  	          break;
  	case 'b': return 800;
  	          break;
	case 'c': return 500;
  	          break;			          
   } 
}  

void mostrar (float acu1, float acu2, float acu3) 
{
	printf ("Monto v1 %f\t v2 %f\t v3  %f\n", acu1, acu2, acu3);
}  


   
   
