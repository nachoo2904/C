/*
Tercer parcial 2cuatrimestre 2018
tamaño de los vectores en 50 posiciones.

*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define tam 50

void cargavector(int x, char y, int z,  int *vx, char *vy, int *vz, int j);
void armarresultados(int *vx, char *vy, int *vz, int i);
int calcpuntaje (char, int);
int menu();

main()
{
      int opc=0, i=0, ctirador, dist, vmenu;
      int vctirador[tam]={0}, vdist[tam]={0};
      char ctiro, vctiro[tam]={'z'};
      
      vmenu=menu();
      while(vmenu!=3)
      {
         
         switch(vmenu)
         {
             case 1:
                  printf("CONCURSO DE TIRO:\n");
                  printf("-------\n\n");
                  printf("Ingresar Código de Tirador de 1 a 10: \n");
                  fflush(stdin);
                  scanf("%d",&ctirador);
                  printf("Ingrese Tiro: C, M, B, F:\n");
                  fflush(stdin);
                  scanf("%c",&ctiro);
                  printf("Ingrese Distancia 1 o 2:\n");
                  fflush(stdin);
                  scanf("%d",&dist);
                
                  cargavector(ctirador, ctiro, dist, vctirador, vctiro, vdist, i);
                  
                  i=i+1;     
                  getch();
                  system("CLS");
                  break;
             case 2:
                  armarresultados(vctirador, vctiro, vdist,i);
                  getch();
                  break;
               
         
         }
        vmenu=menu();
}
}
////////////////////////////////////////////////////////////////////////////////
void armarresultados(int *vx, char *vy, int *vz, int i)
{ 
     int puntaje, j, codigotirador, max;
     int vpuntaje[10]={0};  // acumulo puntajes
     int *vp;
    
        for(j=0; j<i; j++) // recorro todos los vectores
        { 
        puntaje=calcpuntaje(*(vy+j), *(vz+j));
                                
            
        printf("%d\t %c\t %d\t %d\n",*(vx+j),*(vy+j),*(vz+j), puntaje);
        
        
        vpuntaje[*(vx+j)-1]=vpuntaje[*(vx+j)-1]+puntaje;
		
		  
        system("pause");  
        
       
        }
         
     vp=vpuntaje;
	     
     //for(i=0;i<10;i++) // recorro e vector de puntajes
       // {                         
       // if (i==0) { max=vpuntaje[i]; codigotirador=i;}
      //  else if (vpuntaje[i] > max) {max=vpuntaje[i]; codigotirador=i;}
	//	}
		
	
		
		for(j=0;j<10; j++)  // con punteros
		{                         
        if (j==0) { max=*(vp+j); codigotirador=i;}
        else if (*(vp+j) > max) {max=*(vp+j); codigotirador=i;}
        
		}
		
        printf("Ganador %d con puntaje %d \n",codigotirador+1, max);
   
     system("pause");
     
}
////////////////////////////////////////////////////////////////////////////////
void cargavector(int x, char y, int z,  int *vx, char *vy, int *vz,  int j)
{
     *(vx+j)=x;
     *(vy+j)=y;
     *(vz+j)=z;
  
}
////////////////////////////////////////////////////////////////////////////////
int menu()
{
    int opc;
         printf("PROGRAMA CONCURSO TIRO AL BLANCO\n");
         printf("*****************\n\n\n");
         printf("1-Cargar datos de tiros al blanco\n");
         printf("2-Mostrar y registrar resultados\n");
         printf("3-Salir\n");
         scanf("%i",&opc);
         return opc;
}    
int calcpuntaje (char a, int b)   
{   int auxpunt;
    switch(a) {
              case 'C': auxpunt=100; break;
              case 'M': auxpunt=50; break;
              case 'B': auxpunt=10; break;
              case 'F': auxpunt=-10; break;
              
              }
    if (b==2) { auxpunt=auxpunt*2;}
    return auxpunt;          
}
