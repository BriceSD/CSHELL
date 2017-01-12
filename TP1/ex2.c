#include <stdio.h>
#include <stdlib.h>

char min2maj(char c){
  return c - 32;
}

char maj2min(char c){
  return c + 32;
}

int main(int argc, char *argv[]){
  char string[256];
  printf("Chaine de caractères  ? ");
  scanf( "%s" , string );

  int i = 0;
  while(string[i] != '\0'){
    if(string[i] <= 'a')
      string[i] = maj2min(string[i]);
    else
      string[i] = min2maj(string[i]);
    i++;
  }

  printf("Mot : %s", string);
}
