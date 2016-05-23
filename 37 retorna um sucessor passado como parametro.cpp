#include<stdio.h>
#include<stdlib.h>
int devolve(int a);

//INICIO!!
main()
{
system ("color 70");

int b;
printf("\t\t\t Insira um numero!\n\n");
scanf("%d",&b);
printf("%d Sucessor! \n\n",devolve(b));     
system("pause");      
}

//ESPECIFICAÇÃO
int devolve(int a)
{
return a+1;    
}
