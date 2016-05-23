#include<stdio.h>
#include<stdlib.h>
int processo (char n[],int i);

main()
{
system ("color 79");

char nome[60];
int  idade;

printf("Insira seu nome completo: \n");
gets(nome);
printf("\nDigite sua idade: \n");
scanf("%d",&idade); 

if(processo(nome,idade))
printf("\n\nMaior de idade!\n\n");

else 
printf("\n\nMenor de idade!\n\n");

system("pause");   
}

int processo(char n[],int i) //Especificaçao da função
{
if (i>=18)
return 1;

else
return 0;    
}
