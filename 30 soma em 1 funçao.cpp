#include<stdio.h>
#include<stdlib.h>
float soma(float x,float y);

float soma(float x,float y) //ESPECIFIÇÃO DA FUNÇÃO
{
return x+y;
}

main()
{
system ("color 79");      
float a,b;
printf("Insira dois numros\n");
scanf("%f%f",&a,&b);
printf("\n\nResultado= %0.2f \n\n",soma(a,b)); //CHAMEI A FUNÇÃO DENTRO DO PRINTF

system("pause");      
}
