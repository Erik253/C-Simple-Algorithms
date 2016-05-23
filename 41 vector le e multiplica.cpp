#include<stdio.h>
#include<stdlib.h>
#define z 3

float v[z]; //VEcTOR 
void armazenar();
void multiplicar();

main(){
system ("color 74");

armazenar();
multiplicar();
system("pause");
}//KEY MAIN

void armazenar(){
int cont;
printf("\t\t\ Insira %d numeros \n\n",z);

for(cont=0;cont<z;cont++)
scanf("%f",&v[cont]);
}//key armazenar

void multiplicar(){

int contar;
printf("\t\t Numeros digitados 3x!\n\n");

for(contar=0;contar<z;contar++)     
printf("%0.1f \n",v[contar]*3);     
}//key multiplicar
