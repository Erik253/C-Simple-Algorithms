#include<stdio.h>
#include<stdlib.h>
#define t 2

float z[t][t];
int cont,conte;

main(){
system ("color 74");
printf("\t\tDigite valores %d para a Matrix Dimensional!\n\n",t*t);

for(cont=0;cont<t;cont++)
{
for(conte=0;conte<t;conte++)
{
scanf("%f",&z[cont][conte]);

}//Key 2� for
}//Key 1�for
printf("\nValores da diagonal principal:");
for(cont=0;cont<t;cont++)
{
 for(conte=0;conte<t;conte++)
 {
 if(cont+conte==t-1)  //Esquema pra monstrar a diagonal secundaria!
printf("\n%f\n",z[cont][conte]);
}//Key 2� for
}//key 1� for


system("pause");
}//Key Main
