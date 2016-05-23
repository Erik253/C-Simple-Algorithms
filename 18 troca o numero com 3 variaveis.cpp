#include<stdio.h>
#include<stdlib.h>
main()
{
//variaveis
float a,b,c;

//Color
system ("color 79");

//inicio
printf ("Digite o valor de A:");
scanf("%f",&a);

printf("Digite o valor de B:");
scanf("%f",&b);

//Processo
c=a;
a=b;
b=c;

printf("\nCom os valores invertidos....\n\nA:%0.0f e B:%0.0f\n\n",a,b);

//fim
system("pause");
}
