#include<stdio.h>
#include<stdlib.h>
#define t 50
main()
{
//Variaveis
int i;
float s,sb,ts;
char nome[40];

//Color
system("color 79");

//REPETIÇAO
printf("\t\tCadastro de Funcionarios! \n\n");

for(i=1;i<=t;i++)
{
printf("Nome do funcionario:");
gets(nome);

printf("Salario:");
scanf("%f",&s);

printf("Tempo de Servico:");
scanf("%f",&ts);
if(ts>=10)
{sb=s*1.2;}

else{
if(ts<=5)
{sb=s*1.1;}

else
{sb=s*1.15;}
}

printf("\nNome: %s \n",nome);
printf("Salario com bonus:R$%0.2f \n\n",sb);
_flushall;
}
system ("pause");
}
