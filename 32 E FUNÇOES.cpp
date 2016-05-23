#include<stdio.h>
#include<stdlib.h>
float soma       (float a,float b);
float subtra     (float x,float y);
float divisao    (float c,float d);
float multiplicar(float k,float l);

void leia();
void exiba(float resultado);
float n1,n2,r;  //VARIAVEIS GLOBAIS


//ESPECIFICAÇOES DAS FUNCTIONS!!
void leia()
{
printf("Digite dois numeros:\n\n");
scanf("%f%f",&n1,&n2);    
}

void exiba(float resultado)
{
printf("Resultado= %0.3f \n\n",resultado);     
}

float soma(float a,float b)
{
return a+b;
}

float subtra(float x,float y)
{
return x-y;      
}

float divisao(float c,float d)
{
return c/d;      
}


float multiplicar(float k,float l)
{
return k*l;      
}

//INICIO !!!!!!
main()
{
system ("color 79");

char opcao;

while(1)
{
 system("cls");//PRA KE ISSO?
leia();
printf("\t\t Pressione a op%c%co desejada!\n\n",135,198);
printf(" [+] \n [-] \n [*] \n [/] \n [s]- para sair \n ");
_flushall(); //....
scanf("%c",&opcao);

switch(opcao)
{
     
case'+': printf("\t\t Soma!");
          exiba(soma(n1,n2));         
          break;

case '-': printf("\t\t Subtracao!\n\n");
          r=subtra(n1,n2);
          exiba(r);
          break;
          
case '*': printf("\t\t Multiplica%c%co!\n\n",135,198);
          exiba(multiplicar(n1,n2));
          break;
          
case '/': printf("\t\t Divis%co!\n\n",198);
          r=divisao(n1,n2);
          exiba(r);
          break;
          
case 's': exit(0);
          break;
          
default : printf("Opcao invalida! \n\n");

} // KEY OF SWITCH
 system("pause");    
}// KEY WHILE
      
}//KEY MAIN



























