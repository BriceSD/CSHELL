#include <stdio.h>
#include <stdlib.h>
#define MAX_CAR 100


typedef struct {
  char nomPlanete[MAX_CAR];
  int rayon;
} Planete;

int main(int argc, char *argv[]) {
  Planete *p1;
  p1 = (Planete *) malloc(sizeof(Planete));
}
void Saisir(Planete *p){
  printf("Donner nom planete : ");
  scanf ("%s",p->nomPlanete);
  printf("Donner son rayon : ");
  scanf ("%d",p->rayon);
}
