#include<stdio.h>
#include<stdlib.h>
#define r 5
 
int v[r]={8,13,28,36,44};

main(){
system ("color 74");

int inicio=0, fim=r-1,central;
int b=44;// Digite o valor que procura no vector aqui!
       
while(inicio<=fim)
{
central=(inicio+fim)/2;

if(b==v[central]){
printf("\t\t Achei \n\n");
break;                 
}//key if                  
                  
else
if(b>v[central]){
inicio=central+1;
}// key if

else{
fim=central=-1;     
}//key else
}//Key while      

if(inicio>fim){
printf("Nao achei \n\n");              
}//key if

system("pause");
}//Key main 
