#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int haystock1();
int haystock2();
int haystock3();
float valor(int c1,int c2,int c3);
void mostrar(float val);
int stock1,stock2,stock3;
int main(){
    int ip1,ip2,ip3;
    char continua[3]={"si"};
    stock1=2;
    stock2=2;
    stock3=2;
    int novender;
    while ((strcmp("si",continua)==0) && ((stock1+stock2+stock3)>0)){
          printf("\t\t\nDesea llevar ip1?(1-si,0-no)");
          fflush(stdin);
          scanf("%d",&ip1);
          printf("\t\t\nDesea llevar ip2?(1-si,0-no)");
          fflush(stdin);
          scanf("%d",&ip2);
          printf("\t\t\nDesea llevar ip3?(1-si,0-no)");
          fflush(stdin);
          scanf("%d",&ip3);
          novender=1;
          if (ip1>0){
                     if (!(haystock1())){
                                         printf("\t\t\nNo hay stock de ip1");
                                         novender=0;
                                      }                 
                     }
          if (ip2>0){
                     if (!(haystock2())){
                                         printf("\t\t\nNo hay stock de ip2");
                                         novender=0;
                                      }                 
                     }
          if (ip3>0){
                     if (!(haystock3())){
                                         printf("\t\t\nNo hay stock de ip3");
                                         novender=0;
                                      }                 
                     }
          
          if (novender){
          if (ip1>0){
                     stock1--;}
          if (ip2>0){
                     stock2--;}
          if (ip3>0){
                     stock3--;}
                 mostrar(valor(ip1,ip2,ip3));       
                        
                        }
          system("pause");
          printf("\t\tDesea continuar vendiendo? \n");
          fflush(stdin);
          gets(continua);
          }
    
    
    }
    
int haystock1(){
   if (stock1){
               return 1;}else{
                      return 0;}
    }
int haystock2(){
   if (stock2){
               return 1;}else{
                      return 0;}
    }
   
int haystock3(){
   if (stock3){
               return 1;}else{
                      return 0;}
    }
float valor(c1,c2,c3){
      if ((c1+c2+c3)==3){
                        return 600;}else {
                              return (c1+c2+c3)*250;}
    }
void mostrar(float val){
     system("cls");
     printf("\t\t\nEl valor a abonar es: %.2f",val);
     }
