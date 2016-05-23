#include<stdio.h>
#include<stdlib.h>
void somar(float a,float b);
   
void somar(float a,float b)
{
system ("color 79");
     
printf("%f\n\n",a+b);     
}

main()
{
system ("color 79");


float c,d;   //Variaveis locais
printf("\t\t Insira dois numeros!\n\n");
scanf("%f%f",&c,&d);
somar(c,d);
system("pause");
}
