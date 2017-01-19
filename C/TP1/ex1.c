#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
  char s1[] = {'S', 'a', 'l', 'u', 't', '\0'};
  char s2[] = "Salut";
  char *s3; s3="Salut";
  char *s4="Salut";
  char s5[20];

  sprintf(s5, "Salut");

  printf("s1 : %s\n", s1);
  printf("s2 : %s\n", s2);
  printf("s3 : %s\n", s3);
  printf("s4 : %s\n", s4);
  printf("s5 : %s\n", s5);

  s1[0] = 'd';
  s2[0] = 'd';
  //*s3 = 'd';
  //*s4 = 'd';
  s5[0] = 'd';

  printf("s1 : %s\n", s1);
  printf("s2 : %s\n", s2);
  printf("s3 : %s\n", s3);
  printf("s4 : %s\n", s4);
  printf("s5 : %s\n", s5);
}
