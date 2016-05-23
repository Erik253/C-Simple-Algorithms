# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

main ()
{
//variaveis
float nota1,nota2,nota3,nota4, media;

//Color
system ("color 74");

//beginning
printf("\t\t%c Verifique sua media %c",5,5);
printf ("\n\nDigite a Nota 1: ");
scanf ("%f",&nota1);

printf ("Digite a Nota 2: ");
scanf ("%f",&nota2);

printf ("Digite a Nota 3: ");
scanf ("%f",&nota3);

printf ("Digite a Nota 4: ");
scanf ("%f",&nota4);

//Formula
media=(nota1+nota2+nota3+nota4)/4;
printf (" A sua media %c= %0.2f",130,media);

//End
getch();

} 
