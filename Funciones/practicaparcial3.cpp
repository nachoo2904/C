#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// funciones pedidas
int monto_estacionamiento(int , int  );
void mostrar (int, int, int);

int main(){
    int conta=0, contb=0, contt=0;
    char respuesta, patente[20], playa;  
    int hs, marca, monto;
    
    printf("\t\t\nDesea ingresar vehículos S/N: ");
    fflush(stdin);
    scanf("%c",&respuesta);
    
    while(respuesta=='S')
    {   		
    	printf("\t\t\nIngrese Patente: ");
    	fflush(stdin);
    	scanf("%s",&patente);
    	printf("\t\t\nPlaya de estacionamiento: ");
    	fflush(stdin);
    	scanf("%c",&playa);
    	printf("\t\t\nMarca para por hora (1) o por estadia (0) ");
    	fflush(stdin);
    	scanf("%d",&marca);
    	printf("\t\t\nHoras de permanencia ");
    	fflush(stdin);
    	scanf("%d",&hs);	
    
    	// cálculo importe a cobrar de estacionamiento
    	monto=monto_estacionamiento(marca,hs);    
    	printf("Monto a pagar por el vehículo %d\n", monto); 
		
		switch (playa)  
		{
			case 'A': conta++; break;
			case 'B': contb++; break;
			case 'T': contt++; break;
		}                                
     
        printf("\t\t\nDesea ingresar vehículos S/N: ");
    	fflush(stdin);
    	scanf("%c",&respuesta);  

    }  // fin del while
    mostrar(conta, contb, contt); // mostrar contadores
    system("pause");
    }  // fin del main
    
int monto_estacionamiento( int marca, int hs)
{ 
  if (marca==1) return hs*200;
     else return 1000;     
}  

void mostrar (int conta, int contb, int contt) 
{
	printf ("Cantidad terminal A %d\t terminal B %d\t terminal T %d\n", conta, contb, contt);
}  


   
   
