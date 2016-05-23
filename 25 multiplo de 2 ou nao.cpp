#include<stdio.h>
#include<stdlib.h>
void mult(int a);
main()
{
system ("color 30");

int n; //variavel local

printf("Digite um numero\n");
scanf("%d",&n);
mult(n);
system("pause");
}

void mult(int a)
{
//Color
system ("color 79");     

if(a%5==0)
printf ("E multiplo! \n");

else
printf("Nao e multiplo!\n\n");
}
