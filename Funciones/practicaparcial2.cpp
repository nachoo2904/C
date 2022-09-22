#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// funciones pedidas
int calcular_desvio(int , char  );
void mostrar (int);

int main(){
    int bandera=1;
    char respuesta, nombre[20], estilo;  
    int edad, tiempo, desvio, min;
    
    printf("\t\t\nDesea ingresar nadadores S/N: ");
    fflush(stdin);
    scanf("%c",&respuesta);
    
    while(respuesta=='S')
    {   		
    	printf("\t\t\nIngrese Nombre del nadador: ");
    	fflush(stdin);
    	scanf("%s",&nombre);
    	printf("\t\t\nEdad: ");
    	fflush(stdin);
    	scanf("%d",&edad);
    	printf("\t\t\nEstilo ");
    	fflush(stdin);
    	scanf("%c",&estilo);
    	printf("\t\t\nTiempo ");
    	fflush(stdin);
    	scanf("%d",&tiempo);	
    
    	// c�lculo del desv�o
    	desvio=calcular_desvio(tiempo, estilo);    
    	printf("Nombre %s\t Tiempo %d\t Desv�o %d\n", nombre, tiempo, desvio); 
		
		// c�lculo de la edad del m�s joven
		if (bandera==1)  
			{ min=edad;
		  	  bandera=0;
			}  
		else if (edad < min)
			{ min=edad;
			}		                         
     
        printf("\t\t\nDesea ingresar nadadores S/N: ");
    	fflush(stdin);
    	scanf("%c",&respuesta);  

    }  // fin del while
    mostrar(min); // mostrar edad m�nima
    system("pause");
    }  // fin del main
    
int calcular_desvio( int tiempo, char estilo)
{ int tiempoopt;
  switch (estilo)
        {
        	case 'a' : tiempoopt=30; break;
        	case 'b' : tiempoopt=50; break;
        	case 'c' : tiempoopt=40; break;
		}
		
  return tiempo - tiempoopt;    
}  
void mostrar (int min) 
{
	printf ("M�nima edad %d\n", min);
}  


   
   
