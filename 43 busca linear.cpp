#include<stdio.h>
#include<stdlib.h>
#define r 8
void busca(float z);
void escolha();
float a[r]={10,20,30,40,50,60,70}; 
float b;

//ESPECIFICANDO
void escolha(){
printf("\t\t Pesquise o valor do vetor!\n\n insira um numero: ");
scanf("%f",&b);

}//key escolha

void busca(float z){
int cont,chave=0;   //variaveis
 
 for(cont=0;cont<8;cont++){
 if(z==a[cont]){
 printf("\n\n Valor encontrado!\n O numero %0.0f esta no vetor A[%d] \n\n\n",a[cont],cont);
 chave=1;
 break;
 }//key if
 }//Key for

if(chave==0){
printf("\n\nValor nao encontrado!, realize a procura novamente\n\n\n");              
}//key if 
}//key busca

main(){
system ("color 74");
escolha();
busca(b);
system("pause");      
}//Key main
