#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// Ejemplo de matrices para clase

#define TAM 4


 main()
{
   int mat[TAM][TAM], mat1[TAM][TAM];
    int i,j, max;
    
    for (i=0;i<TAM;i++)
      {
       for (j=0;j<TAM;j++)
    	{
    		printf("\n Ingrese el valor %d %d de la matriz: ", i, j);
    		scanf("%d",&mat[i][j]);  
    	}
     }
     
     printf("\n Matriz base:");
      for (i=0;i<TAM;i++)
      {
       for (j=0;j<TAM;j++)
    	{
    		printf("\n Elemento %d  %d es  %d ", i,j, mat[i][j]);
    	}
    	printf(" \n");
     }
    	
    	
    printf("\n Armo la otra matriz:");	
    
     for (i=0;i<TAM;i++)
      {  
       for (j=0;j<TAM;j++)
    	{
    	  mat1[j][i]=mat[i][j];  // Al ememento mat1 j i le asigno el elemento mat i j 
    	}		
       }
       
     printf("\n Matriz resultante:");
       for (i=0;i<TAM;i++)
      {
       for (j=0;j<TAM;j++)
    	{
    		printf("\n Elemento %d  %d  es  %d ", i, j, mat1[i][j]);
    	}
    	printf(" \n");
     }
   
    getch();
    
    
}

