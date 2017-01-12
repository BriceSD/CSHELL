#include <stdio.h>
#include <stdlib.h>
#define MAX 3


int CURRENT_ID = 0;
typedef enum {
  XX,
  YY,
  ORIG
}axe_symetrie;

typedef struct Point Point;
struct Point
{
    float x;
    float y;
    int id;
};

int symetrique(Point* p, axe_symetrie axe){
  switch(axe){
    case XX:
      {
        p->y = -p->y;
        return 1;
      }
    case YY:
      {
        p->x = -p->x;
        return 1;
      }
    case ORIG:
      {
        p->x = -p->x;
        p->y = -p->y;
        return 1;
      }
  }
  return 0;
}

void constructeur(Point* p){
  printf("Entrez x : \n");
  scanf("%f", &p->x);
  printf("\nEntrez y : \n");
  scanf("%f", &p->y);
  p->id = ++CURRENT_ID;
}

void affiche(Point p){
  printf("\n%d(%f,%f)\n", p.id, p.x, p.y);
}

void creerSegment(Point[] seg){
  float pas_x = ;
  float pas_y = ;
}

int main(int argc, char *argv[]){
  axe_symetrie axe = XX;
  Point p;

  constructeur(&p);
  symetrique(&p, axe);

  affiche(p);
  return 0;
}
