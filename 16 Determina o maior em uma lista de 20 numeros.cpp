#include<stdio.h>
#include<stdlib.h>
#define v 10
main()
{
//Variaveis
int i;
float n,maior;

//Color
system("color 79");

printf("Digite um n%cmero \n",233); //%C,233 � pra coloca o acento no u(�)
scanf("%f",&maior);

//Repeti�ao 10 Vezes
for(i=1;i<v;i++)
{
printf("Digite um n%cmero \n",233);
scanf("%f",&n);

//Condi�ao
if
(maior<n)
 {
maior=n;
 }
}
printf("O maior n%cmero da lista %c:%0.0f \n\n",233,130,maior);
system("pause");
}
