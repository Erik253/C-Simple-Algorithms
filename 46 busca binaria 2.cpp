#include<stdio.h>
#include<stdlib.h>
#define z 6
float v[z]={3.8,4.1,5.3,10.0,11.1,12.6};

main{
int inicio=0,central,fim=z-1;

float a;
printf("\t\t Digite o valor para a procura no vector! \n\n");
scanf("%f",&a);

while(inicio<=fim)
{
central=(inicio+fim)/2;

if(a==v[central])
{
printf("Valor encontrado!");                  
break;                  
}//Key if

else
if(a>v[centra])
{
inicio=central+1;
}// key if

else(a<v[central]
{
fim=central-1;                  
}// key else
                   
}//Key while

if(inicio>fim)
{
printf("\t\t nao achei!\n\n");               
}//key if

system("pause");

}//Key main


