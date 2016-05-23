#include <allegro.h>
#define P '#' //PAREDE
#define L '.' //LIVRE
#define E ' ' //ESPAÇO
#define C 'c' //PACMAN dentro da matriz per.
const int tamlar = 32;
const int tamalt = 32;
const int qtdeh = 15;
const int qtdev = 20;

BITMAP *textura[2] = {NULL, NULL};

char mapa[qtdeh][qtdev] = {{P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P},
                           {P,L,L,L,L,L,L,L,L,L,L,L,L,L,L,L,L,L,L,P},
                           {P,L,P,L,P,P,P,P,P,P,L,P,P,P,P,P,L,P,L,P},
                           {P,L,P,L,L,L,L,L,L,L,L,L,L,L,L,L,L,P,L,P},
                           {P,L,P,L,P,P,P,L,P,P,P,P,L,P,P,P,L,P,L,P},
                           {P,L,L,L,P,L,L,L,L,L,L,L,L,L,L,P,L,L,L,P},
                           {P,L,P,L,P,L,P,P,P,L,P,P,P,P,L,P,L,P,L,P},
                           {L,L,L,L,L,L,L,L,L,L,L,L,L,L,L,L,L,L,L,L},
                           {P,L,P,L,P,L,P,P,P,P,L,P,P,P,L,P,L,P,L,P},
                           {P,L,L,L,P,L,L,L,L,L,L,L,L,L,L,P,L,L,L,P},
                           {P,L,P,L,P,P,P,L,P,P,P,P,L,P,P,P,L,P,L,P},
                           {P,L,P,L,L,L,L,L,L,L,L,L,L,L,L,L,L,P,L,P},
                           {P,L,P,L,P,P,P,P,P,L,P,P,P,P,P,P,L,P,L,P},
                           {P,L,L,L,L,L,L,L,L,L,L,L,L,L,L,L,L,L,L,P},
                           {P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P}};
                           
char per[qtdeh][qtdev] =  {{P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P},
                           {P,C,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,P},
                           {P,E,P,E,P,P,P,P,P,P,E,P,P,P,P,P,E,P,E,P},
                           {P,E,P,E,E,E,E,E,E,E,E,E,E,E,E,E,E,P,E,P},
                           {P,E,P,E,P,P,P,E,P,P,P,P,E,P,P,P,E,P,E,P},
                           {P,E,E,E,P,E,E,E,E,E,E,E,E,E,E,P,E,E,E,P},
                           {P,E,P,E,P,E,P,P,P,E,P,P,P,P,E,P,E,P,E,P},
                           {E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E},
                           {P,E,P,E,P,E,P,P,P,P,E,P,P,P,E,P,E,P,E,P},
                           {P,E,E,E,P,E,E,E,E,E,E,E,E,E,E,P,E,E,E,P},
                           {P,E,P,E,P,P,P,E,P,P,P,P,E,P,P,P,E,P,E,P},
                           {P,E,P,E,E,E,E,E,E,E,E,E,E,E,E,E,E,P,E,P},
                           {P,E,P,E,P,P,P,P,P,E,P,P,P,P,P,P,E,P,E,P},
                           {P,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,P},
                           {P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P}};

typedef struct pac
{
        int x, y;
        int lar, alt; //Largura e Altura
        BITMAP *img;
}PAC;

void CarregaTextura()
{
     textura[0] = load_bitmap("tiles/parede.bmp", NULL);
     textura[1] = load_bitmap("tiles/chao.bmp", NULL);
}    

void DesenhaCenario(BITMAP *buffer)
{
     int x = 0, y = 0;
     
     for(x = 0; x < qtdeh; x++)
           {
           for(y = 0; y < qtdev; y++)
                 {
                 if(mapa[x][y] == '#')
                      draw_sprite(buffer, textura[0], y * tamlar, x * tamalt);
                 else
                 if(mapa[x][y] == '.')
                      draw_sprite(buffer, textura[1], y * tamlar, x * tamalt);
                      }
           }     
}
     
int main(void)
{
   allegro_init();
   install_keyboard();
   set_color_depth(32);
   set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 512, 0, 0);
   
   BITMAP *buffer = create_bitmap(640, 480);
   
   PAC *p;
   
   if((p = (PAC*)malloc(sizeof(PAC))) == NULL)
        exit(0);
   
   p->img = load_bitmap("pacman.bmp", NULL);
   p->x = 32;
   p->y = 32;
   
   int pix = 1, piy = 1; //Posição inicial X e Y na matriz per.
      
   CarregaTextura();
   while(!key[KEY_ESC])
        {
        clear_bitmap(buffer);
        /*for(q=0; q<20; q++)
         for(w=0; w<15; w++)
                  textprintf_ex(screen, font, 0, 500, makecol(0,255,0), -1, "%c",per[q][w]);*/
                                   
        if(key[KEY_LEFT]) 
              {
              if(per[pix][piy-1] == P)
                   continue;
              per[pix][piy] = E;
              per[pix][--piy] = C;
              p->img = load_bitmap("pacman.bmp", NULL);
              p->x -= 32;
              if(p->x == 32)
                 p->x = 640;}
              
        if(key[KEY_RIGHT])
              {
              if(per[pix][piy+1] == P)
                   continue;
              per[pix][piy] = E;
              per[pix][++piy] = C;
              p->img = load_bitmap("pacman2.bmp", NULL);
              p->x += 32;
              if(p->x == 640-32)
                 p->x = 32;}                   
        if (key[KEY_UP]) 
              {
              if(per[pix-1][piy] == P)
                   continue;
              per[pix][piy] = E;
              per[--pix][piy] = C;
              p->img = load_bitmap("pacman3.bmp", NULL);
              p->y -= 32;}
        if (key[KEY_DOWN]) 
              {
              if(per[pix+1][piy] == P)
                   continue;
              per[pix][piy] = E;
              per[++pix][piy] = C;
              p->img = load_bitmap("pacman4.bmp", NULL);
              p->y += 32;}
              
        DesenhaCenario(buffer);
        draw_sprite(buffer, p->img, p->x, p->y);
        blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        rest(80);
        }
   
   allegro_exit();
   
return (0);
}
END_OF_MAIN();
