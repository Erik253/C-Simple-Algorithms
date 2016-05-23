#include<stdio.h>
#include<stdlib.h>
#define t 10
main()
{

//Color
system("color 79");

//variaveis
int i,n,s=0;

//inicio
printf("\t\tRealize a soma de %d numeros!\n",t);

for(i=1;i<=t;i++)
{
do{
scanf("%d",&n);
}while(n%10==6);
s+=n;
}

printf("soma=%d\n",s);                              
system ("pause");
}
