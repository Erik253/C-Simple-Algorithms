#include<stdio.h>
#include<stdlib.h>
main()
{
//variaveis
float a,b;

//Color
system ("color 74");

//beginning
printf ("Digite um numero\n");
scanf("%f",&a);

//formula
b=2*a;
printf("O dobro desse numero e %0.3f\n",b);

//end
system("pause");
}
