/*Sortear um baralho (52 cartas, 4 naipes, 13 cartas/naipes)para 2 jogadores cada um recebe 5 cartas*/
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<time.h>


typedef struct {
    char naipe[12];
    int valor;
}Carta;

int main( void )
{
  char naipe1[13] = "Ouros";
  char naipe2[13] = "Copas";
  char naipe3[13] = "Paus";
  char naipe4[13] = "Espadas";
  int i, n, n2;
  Carta baralho[52];

  srand(time( NULL ));

  for(i=0; i<13; i++){
    baralho[i].valor = 13-i;
    strcpy( baralho[i].naipe, naipe1);
  }
  for(i=13; i<26; i++){
    baralho[i].valor = 26-i;
    strcpy( baralho[i].naipe, naipe2);
  }
  for(i=26; i<39; i++){
    baralho[i].valor = 39-i;
    strcpy( baralho[i].naipe, naipe3);
  }
  for(i=39; i<53; i++){
    baralho[i].valor = 52-i;
    strcpy( baralho[i].naipe, naipe4);
  }

  printf("Joagdor 1 recebera:\n");
  for(i=0; i<5; i++){
    n = rand()%52;
    printf("\n%3d de %s", baralho[n].valor, baralho[n].naipe);
  }

  printf("\n\nJoagdor 2 recebera:\n");
  for(i=0; i<5; i++){
    n2 = rand()%52;
    printf("\n%3d de %s", baralho[n2].valor, baralho[n2].naipe);
  }
  return 0;
}