#include<stdio.h>
#include<stdlib.h>
void somar(int a,int b);
void resultado();
int r; //VARIAVEL GLOBAL

   
//Expecificação......
void somar(int a,int b)
{
system ("color 79");
r=a+b;
}

void resultado()
{
printf ("\n\nResultado:%d\n\n",r);
}


// Inicio..........
main()
{
system ("color 79");

int c,d;   //Variaveis locais
printf("\t\t Insira dois numeros!\n\n");
scanf("%d%d",&c,&d);
somar(c,d);
resultado();
system("pause");
}
