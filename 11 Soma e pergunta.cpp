
#include<stdio.h>
#include<stdlib.h>
main()
{
//variaveis
float a,b,c;
char r='s';

//Color
system ("color 79");

//Enquanto
while(r=='s')
{
system("cls"); //Apaga o que foi escrito

//inicio
printf ("\t\t Execute sua Soma!\n\tInsira dois numeros para realizar a soma \n");
scanf("%f%f",&a,&b);
c=a+b;
printf("Soma=%0.0f\n\n",c); //Esse 0 é pro resultado aparece numero inteiro sem virgulas tals
scanf("%c",&r);
_flushall();

//Pergunta
printf("Deseja continuar? \n(S)Sim ou (N)Nao\n");
scanf ("%c",&r);
}

//fim
system("pause");
}
