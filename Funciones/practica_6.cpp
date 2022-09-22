#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

float monto_viaticos(int , float, float  );
void mostrar_pantalla(int   );

int main(){
    int cod, km ;
    int cont_vend=0; 

    char cat;
    char continuar[3]={"si"};
    float gtos_peaje, gtos_comida, anticipo, monto;
    
    while (!strcmp("si",continuar)){
    printf("\t\t\nIngrese Codigo de Legajo: ");
    fflush(stdin);
    scanf("%d",&cod);
    printf("\t\t\nIngrese categoría de empleado: ");
    fflush(stdin);
    scanf("%c",&cat);
    printf("\t\t\nIngrese km. recorridos: ");
    fflush(stdin);
    scanf("%d", &km);
    printf("\t\t\nGastos de Peaje ");
    fflush(stdin);
    scanf("%f",&gtos_peaje);
    printf("\t\t\nGastos de Comidas ");
    fflush(stdin);
    scanf("%f",&gtos_comida);
      
    if (cat=='v') {
       printf("\t\t\nIngrese Anticipo ");
       fflush(stdin);
       scanf("%f",&anticipo);}
    else {anticipo=0;} /* pongo en cero la variable anticipo para el resto de los casos. */
    
    monto=monto_viaticos(km,gtos_peaje,gtos_comida) - anticipo;
       
       /* Calculo el monto del viatico con funcion y resto el anticipo */
    if (monto >= 0) {printf("La empresa debe pagar %f\n", monto);}                                     
        else {printf("El empleado tiene que devolver%f\n", monto);}
       
    if (cat=='v' && km > 2000) { cont_vend=cont_vend+1;}      
        
             
    system("pause");
    system("cls");
    printf("\t\tContinua ingresando datos de empleados?: ");
    fflush(stdin);
    gets(continuar);
    system("cls");
    }
    
    mostrar_pantalla(cont_vend);
   
    system("pause");
    }
 
float monto_viaticos( int a, float b, float c)
{
      float resul;   
      /* Valorizo los km */
      if (a> 2000) 
           {resul= 2000*10 + (a-2000)*5;}
      else {resul=a*10;}
                       
      return resul+b+c;    
}     

void mostrar_pantalla(int a)
{
   printf("\t\tTotal vendedores con mas de 2000 km recorridos: %d\n", a);
    
}
   
   
