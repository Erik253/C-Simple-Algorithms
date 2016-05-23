#include<stdio.h>
#include<stdlib.h>
#define t 3
main()
{
//VARIAVEIS
float n,s=0;
int i;

printf("\t\tInsira %d numeros!\n\n",t);

//REPETIÇAO
for(i=1;i<=t;i++)
{
scanf("%f",&n);
s+=n;                
}

//FORMULA
s=s/t; //s/=t

printf("Media: %f\n",s);

system("pause");
}
