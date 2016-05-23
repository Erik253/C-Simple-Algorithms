#include<stdio.h>
#include<stdlib.h>
void exibe(float *x);

//INICIO
main()
{
system ("color 70");

float l=20;
exibe(&l);
system("pause");      
}

//ESPECIFICAÇÃO
void exibe(float *x)
{
printf("\t\t\t %p \n\n",x);     
}
