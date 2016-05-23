#include<stdio.h>
#include<stdlib.h>
main()
{
//Variaveis
float a,b;

//Color
system ("color 74");

//beginning
printf("Digite o preco de seu produto\n");
scanf("%f",&a);

//formula
b=a*0.7;
printf("Preco com desconto:%R$%0.2f\n",b);

//fim
system("pause");
}
