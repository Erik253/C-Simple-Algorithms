#include<stdio.h>
#include<stdlib.h>
main()
{

//variaveis
char nome[30];

//color
system ("color 74");

//inicio
printf("Digite  seu nome\n");
gets(nome);
printf("O seu nome e %s\n",nome);

//end
system("pause");
}
