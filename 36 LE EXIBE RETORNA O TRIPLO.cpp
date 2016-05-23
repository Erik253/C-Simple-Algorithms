#include<stdio.h>
#include<stdlib.h>
void ler();
void exibe(int a);
int tri(int n);
int num;   //VAR GLOBAL!

//ESPECIFICANDO....
void ler()
{
printf("\t\t Digite um numero!\n\n");
scanf("%d",&num);
}

void exibe(int a)
{
printf("%d \n\n",a);     
}

int tri(int n)
{
return 3*n;    
}

// INICIO!!!
main()
{
system ("color 79");

ler();
exibe (tri(num));
system("pause");     
}
