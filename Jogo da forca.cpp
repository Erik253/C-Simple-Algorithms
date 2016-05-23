
/************************************************************************/

//Bibliotecas
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>


/************************************************************************/

//Variaveis

           char palavra[20],nome1[20],nome2[20],dica[20],lacuna[20],digitada[26],super_dica[20];
           char letra,;
           int cont,tamanho_palavra,vida=10,p=0,rodada;
           int x,q=0;
            char op; //Opção
      
/***********************************************************************/      

//Funções

//*Essa função simula a sintaxe DELAY, presente em outras linguagens de programação

void delay(int seconds)
    {
         clock_t current, end;
    
         current = clock();
         end = current + CLOCKS_PER_SEC * seconds;
    
         while(current < end)
             current = clock();
    }


void start_game()
{
     
      
      system("color 3");
      printf("\t\t**************************************************\n");
      printf("\t\t**                                              **\n");
      printf("\t\t**                                              **\n");
      printf("\t\t** \t\t Jogo da Forca!!!               **\n");
      printf("\t\t**                                              **\n");
      printf("\t\t**                                              **\n");
      printf("\t\t**************************************************\n");
      system("color 0");
      system("color 1");
      system("color 2");
      system("color 3");
      system("color 4");
      system("color 5");
      system("color 6");
      system("color 7");
      system("color 8");        
      system("color 9");
      system("color 1");
      system("color 2");
      system("color 3");
      system("color 4");
      system("color 5");
      system("color 6");
      system("color 7");
      system("color 8");        
      system("color 9");
      system("color 1");
      

      
        system("color f");
        
      printf("\t\t\t\t    Start game!!!");   
      getch();
      
         
}

void selecao_palavra()
{
     system("cls"); 
     printf("\n\n\n"); 
      printf("\t\t***********************\n");
      printf("\t\tNome do desafiante: ");
      gets(nome1);
      printf("\t\t***********************\n");
      printf("\t\tNome do desafiado: ");
      gets(nome2);
     int i;
     system("cls");
     system("color 6");
     printf("\t*****************************************************************\n");
     printf("\t***DESAFIADO, nao olhe, pois o DESAFIANTE digitara uma palavra***\n");
     printf("\t*****************************************************************\n");
     
     delay(3);
     system("cls");

          system("cls");
          system("color 6");
          printf("\t\t\t****************************\n");
          printf("\t\t\t**   Digite uma Palavra   **\n");
          printf("\t\t\t****************************");
          delay(1);
          system("color f");
          
          
printf("\n\n\t\t\tPalavra: ");
gets(palavra);
system("cls");

          system("color 6");
          printf("\t\t\t***************************\n");
          printf("\t\t\t**     Digite a dica     **\n");
          printf("\t\t\t***************************");
          delay(1);
          system("color f");
          
          
printf("\n\n\t\t\tDica: ");
gets(dica);
system("cls");

system("color 6");
          printf("\t\t\t***************************\n");
          printf("\t\t\t**  Digite a super dica  **\n");
          printf("\t\t\t***************************");
          delay(1);
          system("color f");
          
          
printf("\n\n\t\t\tSuper dica: ");
gets(super_dica);  
}


void forca()
{
     system("cls");
     switch(vida)
     {
           case 10:
               printf(" _____\n");
               printf(" |   |\n");
               printf(" |\n");
               printf(" |\n");
               printf("___");
               break;
     
          case 8:
               printf(" _____ \n");
               printf(" |   O \n");
               printf(" | \n");
               printf(" | \n");
               printf("___");
               break;
               
          case 6:
               printf(" _____ \n");
               printf(" |   O \n");
               printf(" |   | \n");
               printf(" |\n");
               printf("___");
               break;
               
          case 4:
               printf(" _____ \n");
               printf(" |   O \n");
               printf(" |  /|\\ \n");
               printf(" |\n");
               printf("___");
               break;
               
          case 2:
               printf(" _____ \n");
               printf(" |   O \n");
               printf(" |  /|\\ \n");
               printf(" |  / \\ \n");
               printf("___");
               break;
               
          case 0:
               printf(" _____\n");
               printf(" |   O\n");
               printf(" |\n");
               printf(" |  /|\\ \n");
               printf("___ / \\ ");
               break;
               
              
          }              
 
}

void campo()
{
     int j;
     tamanho_palavra=strlen(palavra);
     printf("\n\n");
     for(j=0;j<tamanho_palavra;j++)
     {
                                   lacuna[j]='-';
     }
     
}


void comparar()
{
     
     
       
       printf("\n\n");
    x=0;
    
    
     printf("Digite uma letra: ");
     scanf("%c",&letra);
   
     
     
     
     for(cont=0;cont<tamanho_palavra;cont++)
      {
                                          
       
                               if(letra==palavra[cont])
                               {
                                                       _flushall();
                               x=1;
                                lacuna[cont]=palavra[cont];
                                
                               
                               }
                               
       
      }
     q++;
if(x==0)
{
        vida--;
}

}




void perdeu()
{
system("cls");
printf("\n\n\n");
printf("                                      ________                       \n");
printf("                                   .-\"        \"-.                  \n");
printf("                                  /              \\                   \n");
printf("                       _          |              |          _        \n");
printf("                      ( \\         |,  .-.  .-.  ,|         / )      \n");
printf("                       > \"=._     | )(__/  \\__)( |     _.=\" <     \n");
printf("                      (_/\"=._\"=._ |/     /\\     \\| _.=\"_.=\"\\_)\n");
printf ("                             \"=._ (_     ^^     _)\"_.=\"           \n");
printf ("                                 \"=\\__|IIIIII|__/=\"               \n");
printf ("                                _.=\"| \\IIIIII/ |\"=._              \n");
printf ("                            _.=\"_.=\"\\          /\"=._\"=._     _  \n");
printf ("                     ( \\_.=\"_.=\"     `--------`     \"=._\"=._/ ) \n");
printf ("                       > _.=\"                            \"=._ <     \n");
printf ("                     (_/                                    \\_)     \n");
printf("\n\n\t%s voce foi enforcado, a palavra era: %s. FIM DE JOGO!\n\t\t\n",nome2,palavra);
system("color 0");
      system("color 1");
      system("color 2");
      system("color 3");
      system("color 4");
      system("color 5");
      system("color 6");
      system("color 7");
      system("color 8");        
      system("color 9");
      system("color 1");
      system("color 2");
      system("color 3");
      system("color 4");
      system("color 5");
      system("color 6");
      system("color 7");
      system("color 8");        
      system("color 9");
      system("color 1");
      system("color f");
      printf("\n\n\n\nAperte Enter para encerrar\n");
      
getch();
}

void venceu()
{
     system("cls");
     printf("\t\t\t****************************\n");
     printf("\t\t\t******** Voce Venceu!! *****\n");    
     printf("\t\t\t****************************\n");
                                               system("color 0");
      system("color 1");
      system("color 2");
      system("color 3");
      system("color 4");
      system("color 5");
      system("color 6");
      system("color 7");
      system("color 8");        
      system("color 9");
      system("color 1");
      system("color 2");
      system("color 3");
      system("color 4");
      system("color 5");
      system("color 6");
      system("color 7");
      system("color 8");        
      system("color 9");
      system("color 1");
      system("color f");
      printf("\n\n\n\t\t\t  ******** %s ********\n",nome2);   
      printf("\n\n\n\nAperte Enter para encerrar\n");
getch();
     

}

void chance()
{
     switch (vida)
     {
            case 10:
                 
                 printf("Restam: 5 vidas\n"); 
                 break;    
           case 8:
                 
                 printf("Restam: 4 vidas\n"); 
                 break;    
           case 6:
                 
                 printf("Restam: 3 vidas\n"); 
                 break;    
           case 4:
                 
                 printf("Restam: 2 vidas\n"); 
                 break;    
           case 2:
                 
                 printf("Restam: 1 vidas\n"); 
                 break;
          default:
                 
                 printf("Morreu\n"); 
                 break;    
                 }
}  
           
           

      
           
/***********************************************************************/      

//Principal

main()
{    
  
      
 
 
      start_game();  //inicio do jogo
      system("cls");
      printf("\t\t********************************\n");
      printf("\t\t**                            **\n");
      printf("\t\t**        [1] Jogar           **\n");
      printf("\t\t**        [2] Sair            **\n");
      printf("\t\t**                            **\n");
      printf("\t\t********************************\n");
      printf("\t\t      Escolha a opcao: "); //escolher entre jogar e sair
      scanf("%c",&op);
      _flushall(); //limpar buffer
     
      switch(op)
      {
                case '1': //caso escolha 1(JOGAR)
                       
                       system("cls");
                       selecao_palavra();
                       campo();
                       _flushall();
                       rodada=0;
                while(rodada==0) //ver se ainda havera rodada
                {
                        forca();
                        printf("\n\n\n%s\n",lacuna);
                        printf("\n\n");
                        if(vida>2)
                        {
                        printf("******************************\n");
                        printf("Dica: %s\n",dica);
                        printf("******************************\n");}
                        else{
                        printf("******************************\n");
                        printf("Super dica: %s\n",super_dica);     
                        printf("******************************\n");
                        }
                        printf("******************************\n");
                        chance();
                        printf("******************************\n");
                        
                    
                        comparar();
                        
                        
                        if(strcmp(lacuna,palavra))
                        {
                                          
                        }
                        else{
                
                        
                        venceu();
                        rodada=1;
                        
                        }
                        if(vida<0)
                        {
                                  perdeu();
                                  
                                  rodada=1;
                        }
                        
                }
                                 
                       break;
                case '2':  //caso escolha 2 (SAIR)
                     printf("o programa sera fechado\n");
                     delay(3);
                     break;
                default:   //caso não escolha nenhum.
                        printf("Opcao invalida, o programa sera fechado");
                        
      } 
                      
      
      
      
      
      
      
      
      
      
      
       
      
      
 
getch();
}           
            
      
     
      
      



  
