#include<stdio.h>
#include<stdlib.h>
void troca(int *a,int *b);

//ESPECIFICAÇAÕ DA FUNÇÃO
void troca(int *a,int *b)
{
int temp; //VAR LOCAL 
temp=*a;
*a=*b;
*b=temp;     
}

//INICIO
main()
{
system ("color 70");

int x=4,y=2;      
troca(&x,&y);
printf("\t\t x= %d  y=%d \n\n",x,y);
system("pause");
}
