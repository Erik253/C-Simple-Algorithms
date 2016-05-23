//METODO BOLHA DE ORDENAÇAO

#include<stdio.h>
#include<stdlib.h>
#define r 6
float v[r],aux;

main(){
system ("color 74");
int i,j;       
  
printf("\t\tInsira um valor para cada vector!");     

for(i=0;i<r;i++)
{
printf("\nV[%d]= ",i);                 
scanf ("%f",&v[i]);                 
}//KEY FOR       
       
for(j=0;j<r-1;j++)
{
 for(i=0;i<r-1-j;i++)
 {
  if(v[i]>v[i+1])
  {
  aux=v[i];
  v[i]=v[i+1];
  v[i+1]=aux;
  
  }//KEY IF                   
  }//key for 2     
  }//KEY FOR 1       

printf("\n\n Valores em ordem crescente: ");      
for(i=0;i<r;i++)
{       
printf("\n\nV[%d]= %0.0f \n",i,v[i]);
}// KEY for      

system("pause");      
}//KEY MAIN
