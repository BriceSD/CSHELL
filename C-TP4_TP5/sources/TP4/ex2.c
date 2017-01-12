#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char* get_source(int argc, char *argv[]){
  static char file[256];
  if(argc != 3){
    printf("Entrez le nom du fichier source : ");
    scanf("%s", file);
    return file;
  }
  return argv[1];
}

char* get_dest(int argc, char *argv[]){
  static char file[256];
  if(argc != 3){
    printf("Entrez le nom du fichier destination : ");
    scanf("%s", file);
    return file;
  }
  return argv[2];
}

int main(int argc, char *argv[]){
  FILE * fp_source;
  FILE * fp_dest;
  char c;

  char* source = get_source(argc, argv);
  char* dest = get_dest(argc, argv);
  fp_source = fopen (source, "r");
  fp_dest = fopen (dest, "w");

  while(1)
  {
    c = fgetc(fp_source);
    if(feof(fp_source))
    {
      break;
    }
    fprintf(fp_dest, "%c", c);
  }



  fclose(fp_source);
  fclose(fp_dest);
}
