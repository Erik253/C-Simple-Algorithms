#include<stdio.h>
#include<stdlib.h>
main()
{
//variaveis
int n,i,fat=1;
 //Color
system ("color 79");

//inicio
printf("\t\tVerifique o fatorial!");
printf("\n\nDigite um numero:");
scanf("%d",&n);

//processo
for(i=n;i>1;i--)
{
fat*=i; //fat*i
}

printf("fatorial:%d\n\n",fat);

system ("pause");
}
