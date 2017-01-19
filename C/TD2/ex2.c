#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CAR 100


typedef struct {
  char nomPlanete[MAX_CAR];
  int rayon;
} Planete;

void Saisir(Planete *p){
  printf("Donner nom planete : ");
  scanf ("%s",p->nomPlanete);
  printf("Donner son rayon : ");
  scanf ("%d",&p->rayon);
}

Planete* dupliquer(Planete p){
  Planete *p1;
  p1 = (Planete*)malloc(sizeof(Planete));
  p1->rayon = p.rayon;
  strcpy(p1->nomPlanete, p.nomPlanete);
  return p1;
}

int main(int argc, char *argv[]) {
  Planete p;
  Planete *ptr_p;
  Saisir(&p);
  printf("%s %d \n", p.nomPlanete, p.rayon);
  ptr_p = dupliquer(p);
  printf("%s %d \n", ptr_p->nomPlanete, ptr_p->rayon);
}
