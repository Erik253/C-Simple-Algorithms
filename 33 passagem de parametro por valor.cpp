#include<stdio.h>
#include<stdlib.h>
void troca(int a,int b);

//ESPECIFICA�AO DA FUN�AO
void troca(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
}

// Inicio
main()
{
system ("color 79");

int x=4,y=2;
troca(x,y);
printf("x=%d y=%d \n\n",x,y);
system("pause");      
}
