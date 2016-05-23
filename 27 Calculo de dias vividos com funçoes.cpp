#include<stdio.h>
#include<stdlib.h>
void calculo(int a);

//Expecificação...
void calculo(int a)
{
printf("%d dias\n\n",a*365);     
}


main()
{
system ("color 79");

int idade;
printf("\t\tVeja quantos dias voce viveu!\n\nDigite sua idade: ");
scanf("%d",&idade);
calculo(idade);
system("pause");      
}
