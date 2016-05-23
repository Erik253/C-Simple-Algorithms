#include<stdio.h>
#include<stdlib.h>
main()
{

//Variaveis
int a,n1,n2,resul;

//color
system ("color 17");

//inicio
printf ("\t\tDigite o numero da operacao desejada\n\n 1 para Soma\n 2 para Subtracao\n 3 para divisao\n 4 para multiplicacao\n\n ");
scanf  ("%d",&a);

//Escolha
switch (a)
{

case 1: printf("Soma\n\nDigite dois numeros:\n");
        scanf("%d%d",&n1,&n2);
        resul=n1+n2;
        
        printf("resultado: %d");
        scanf("%d",&resul);
break;

case 2: printf("subtracao\n\n Digite dois numeros:\n");
        scanf("%d%d",&n1,&n2);
        resul=n1-n2;
        
        printf("resultado: %d");
        scanf("%d",&resul);

break;

case 3: printf("Divisao\n\n Digite dois numeros:\n");
        scanf("%d%d",&n1,&n2);
        resul=n1/n2;
        
        printf("resultado: %d");
        scanf ("%d",&resul);
break;

case 4: printf("multiplicacao\n\n Digite dois numeros\n");
        scanf ("%d%d",&n1,&n2);
        resul=n1*n2;
        
        printf("resultado: %d\n");
        scanf("%d",&resul);
        
break;

default : printf("opcao invalida!\n\n"); 
}

//End
system("pause");
}
